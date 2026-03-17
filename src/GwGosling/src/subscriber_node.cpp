
#include "rclcpp/rclcpp.hpp"

#include "std_msgs/msg/string.hpp"

class Subscriber : public rclcpp::Node {

public:

    Subscriber() : Node("SierraBurgesIsATigerrrr") {

        subscription_ = this->create_subscription<std_msgs::msg::String>(

            "Ryland Pernah Berkata", 10,

            std::bind(&Subscriber::listener_callback, this, std::placeholders::_1));

    }

private:

    void listener_callback(const std_msgs::msg::String::SharedPtr msg) {

        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());

    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

};

int main(int argc, char* argv[]) {

    rclcpp::init(argc, argv);

    rclcpp::spin(std::make_shared<Subscriber>());

    rclcpp::shutdown();

    return 0;

}

