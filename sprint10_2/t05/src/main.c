#include "header.h"

int main(int argc, char **argv) {
    mx_check_args(argc, argv);
    //enum e_mode mode = get_mode(argv[1]);
    t_agent **agents = parse_agents(argv[2]);
    //sort(agents, mode)
    print_agents(agents);
    delete_agents(agents);
    return 0;
}
