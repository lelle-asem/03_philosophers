#include "philo_bonus.h"

// time was converted from milliseconds to microsecond everywere
int	init_struct(int argc, char **argv, t_hold *hold)
{
	hold->philos_n = ft_atoi(argv[1]);
	hold->time_die = ft_atoi(argv[2]) * 1000;
	hold->time_eat = ft_atoi(argv[3]) * 1000;
	hold->time_sleep = ft_atoi(argv[4]) * 1000;
	if (argc == 6)
		hold->eat_num_min = ft_atoi(argv[5]);
	if (argc == 5)
		hold->eat_num_min = -1;
	if (argc == 6 && hold->eat_num_min <= 0)
		return (1);
	hold->name = 0;
	hold->eat_num = 0;
	return (0);
}
