
#include <limits.h>

#include "api.h"

#define MAXINT INT_MAX
#define MININT INT_MIN

#define HEAD 2*sizeof(int)

#define SIZE(p)        ((int *)(p))[-1]
#define SET_SIZE(p, n) ((int *)(p))[-1] = n
#define CAPACITY(p)    ((int *)(p))[-2]

struct among
{   int s_size;     /* number of chars in string */
    const symbol * s;       /* search string */
    int substring_i;/* index to longest matching substring */
    int result;     /* result of the lookup */
    int (* function)(struct SN_env *);
};

symbol * create_s(void);
void lose_s(symbol * p);

int skip_utf8(const symbol * p, int c, int lb, int l, int n);

int in_grouping_U(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int in_grouping_b_U(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int out_grouping_U(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int out_grouping_b_U(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);

int in_grouping(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int in_grouping_b(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int out_grouping(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);
int out_grouping_b(struct SN_env * z, const unsigned char * s, int min, int max, int repeat);

int eq_s(struct SN_env * z, int s_size, const symbol * s);
int eq_s_b(struct SN_env * z, int s_size, const symbol * s);
int eq_v(struct SN_env * z, const symbol * p);
int eq_v_b(struct SN_env * z, const symbol * p);

int find_among(struct SN_env * z, const struct among * v, int v_size);
int find_among_b(struct SN_env * z, const struct among * v, int v_size);

int replace_s(struct SN_env * z, int c_bra, int c_ket, int s_size, const symbol * s, int * adjustment);
int slice_from_s(struct SN_env * z, int s_size, const symbol * s);
int slice_from_v(struct SN_env * z, const symbol * p);
int slice_del(struct SN_env * z);

int insert_s(struct SN_env * z, int bra, int ket, int s_size, const symbol * s);
int insert_v(struct SN_env * z, int bra, int ket, const symbol * p);

symbol * slice_to(struct SN_env * z, symbol * p);
symbol * assign_to(struct SN_env * z, symbol * p);

int len_utf8(const symbol * p);

void debug(struct SN_env * z, int number, int line_count);
