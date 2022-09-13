#include "Compiler.h"
#include "CommandApplyBackColor.h"
#include "CommandApplyForeColor.h"
#include "CommandCreate.h"
#include "CommandList.h"
#include "CommandSelect.h"
#include "CommandSelectAll.h"
#include "CommandUnselect.h"
#include "CommandUnselectAll.h"
#include "CommandMove.h"
#include "CommandRemove.h"
#include "CommandOpen.h"

Compiler::Compiler(IApp *app, IParser *parser, Canvas *canvas, Toolbar *toolbar) : app{app}, parser{parser}, canvas{canvas}, toolbar{toolbar}, executeCommand{nullptr}
{
	initializeLineCommandRegister();
}

void Compiler::compile(std::string command)
{
	executeCommand = parser->parse(command);
	IExecuteCommand *lineCommand(lineCommandRegister[executeCommand->typeCommand](executeCommand));
	lineCommand->execute();
	delete lineCommand;
}

void Compiler::initializeLineCommandRegister()
{

	lineCommandRegister.insert(make_pair("create", [=](CommandParseLine *executeCommand)
	{
		/*return buildLineCommand<CreateCommand>(canvas,toolbar,
				lineCP->shapeType,new Point(lineCP->iniciop.first,lineCP->iniciop.second),
				new Point(lineCP->finalp.first,lineCP->finalp.second),lineCP->colorFrente,lineCP->colorFondo);*/
		return CommandBuild<CommandCreate>(canvas, toolbar, executeCommand->typeShape, new Point(executeCommand->initialPointX, executeCommand->initialPointY),
										new Point(executeCommand->finalPointX, executeCommand->finalPointY));
	}));

	lineCommandRegister.insert(make_pair("list", [=](CommandParseLine *executeCommand) {
			
			return CommandBuild<CommandList>(canvas, executeCommand->typeShape,new Point(executeCommand->initialPointX, executeCommand->initialPointY));
	}));

	lineCommandRegister.insert(make_pair("select", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandSelect>(canvas, executeCommand->uid);
	}));

	lineCommandRegister.insert(make_pair("selectAll", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandSelectAll>(canvas);
	}));

	lineCommandRegister.insert(make_pair("unselect", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandUnselect>(canvas, executeCommand->uid);
	}));

	lineCommandRegister.insert(make_pair("unselectAll", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandUnselectAll>(canvas);
	}));

	lineCommandRegister.insert(make_pair("applyForeColor", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandApplyForeColor>(canvas, toolbar, executeCommand->uid,executeCommand->foreColor);
	}));

	lineCommandRegister.insert(make_pair("applyBackgroundColor", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandApplyBackColor>(canvas, toolbar, executeCommand->uid,executeCommand->backgroundColor);
	}));

	lineCommandRegister.insert(make_pair("move", [=](CommandParseLine *executeCommand) {
		return CommandBuild<CommandMove>(canvas,executeCommand->uid,new Point(executeCommand->initialPointX,executeCommand->initialPointY));
	}));

	lineCommandRegister.insert(make_pair("remove", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandRemove>(canvas,executeCommand->uid,new Point(executeCommand->initialPointX,executeCommand->initialPointY));
	}));

	lineCommandRegister.insert(make_pair("open", [=](CommandParseLine *executeCommand) {

			return CommandBuild<CommandOpen>(this , canvas,executeCommand->filePath);
	}));
}
