#ifndef HIDVIZ_CONTROL_HH
#define HIDVIZ_CONTROL_HH

#include "Item.hh"

namespace libhidx {
namespace hid {
    class Control;
    class Usage;
}
}

namespace hidviz {
namespace hid {
    class Control : public Item {
    Q_OBJECT
    public:
        Control(libhidx::hid::Control*);
        void updateData();
    private:
        libhidx::hid::Control* m_control;
        std::vector<QLabel*> m_valueLabels;

        void initGui();
        void initDetailInfo();
        QWidget *getWidgetForUsage(libhidx::hid::Usage *usage);

    signals:
        void dataUpdated();



    };
}
}


#endif //HIDVIZ_CONTROL_HH