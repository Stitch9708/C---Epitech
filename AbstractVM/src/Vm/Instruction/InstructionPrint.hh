/**
 *
 *
 *
 */

#ifndef __INSTRUCTIONPRINT_HH__
#define	__INSTRUCTIONPRINT_HH__

#include "AbstractInstruction.hh"

class InstructionPrint : public AbstractInstruction {
protected:

public:
	InstructionPrint();
	virtual ~InstructionPrint();

	virtual void operator()(Core * core) = 0;

};

#endif
