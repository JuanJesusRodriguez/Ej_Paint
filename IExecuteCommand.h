#ifndef __ICOMMAND__HPP
#define __ICOMMAND__HPP

template <typename T, typename... Args>
T* CommandBuild(Args&&... args)
{
    return new T(forward<Args>(args)...);
}

    class IExecuteCommand{
        public:
        virtual void execute() = 0;
        virtual bool isSerial() = 0;
        virtual ~IExecuteCommand();
    };

#endif /* __ICOMMAND__HPP */
