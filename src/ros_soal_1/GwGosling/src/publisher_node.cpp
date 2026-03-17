
#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"

class Publisher : public rclcpp::Node {

public:

    Publisher() : Node("kissyohomies") {

        publisher_ = this->create_publisher<std_msgs::msg::String>("Ryland Pernah Berkata", 10);

        timer_ = this->create_wall_timer(

            std::chrono::seconds(1),

            std::bind(&Publisher::timer_callback, this));

    }

private:

    void timer_callback() {

        auto msg = std_msgs::msg::String();

        msg.data = "Hai kempot";

        publisher_->publish(msg);

        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", msg.data.c_str());

    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;

    rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char* argv[]) {

    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<Publisher>());

    rclcpp::shutdown();

    return 0;

}

