#define INPUT_BITS 1024
#define PE 1
#define AIE_NUM 1
#define DDR_BITS 512
#define PLIO_BITS 128

#define COMPUTE_ELEMS 40

#define TASK_INPUT_CHUNK (INPUT_BITS / DDR_BITS)
#define TASK_OUTPUT_CHUNK (INPUT_BITS * 2 / DDR_BITS)
#define VEC_ELEM_BITS 32
#define VALID_BITS 31
#define VEC_SIZE 8
#define SENT_VALID_ELE 8
#define INPUT_WINDOW_SIZE (COMPUTE_ELEMS * 4)
#define OUTPUT_WINDOW_SIZE (COMPUTE_ELEMS * 2 * 3 * 4)
