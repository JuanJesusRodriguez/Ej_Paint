#ifndef __ICOMMAND__HPP
#define __ICOMMAND__HPP

    class IExecuteCommand{
        public:
        virtual void execute() = 0;
        virtual ~IExecuteCommand();
    };

#endif /* __ICOMMAND__HPP */
