/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPOP_HH__
#define	__INSTRUCTIONPOP_HH__

#include "AbstractInstruction.hh"

class InstructionPop : public AbstractInstruction {
protected:

public:
	InstructionPop();
	virtual ~InstructionPop();

	virtual void operator()(Core * core) = 0;

};

#endif
