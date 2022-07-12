#include <tm/ir.h>

int main()
{
	tm_insn insn = TM_INSN(2, 4, 8, 0, 1);
	printf("%s %s %i, %i, %i\n", tm_type_name(TM_INSN_TYPE(insn)), tm_code_name[TM_INSN_CODE(insn)], TM_INSN_A(insn), TM_INSN_B(insn), TM_INSN_C(insn));
	return 0;
}
