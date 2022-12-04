# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    list_by_depencies.sh                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 21:40:46 by vcedraz-          #+#    #+#              #
#    Updated: 2022/12/03 21:59:16 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# this bash script will output the result of ./count_dependencies.sh
# in a sorted way, from the least dependent to the most dependent:

# if the output txt files already exist in the current directory, delete them
if [ -f "sorted_dependencies.txt" ]; then
	rm -f dependencies.txt
fi
if [ -f "sorted_dependencies_no_number.txt" ]; then
	rm -f sorted_dependencies_no_number.txt
fi

./count_dependencies.sh | sort -n -k 2 -t ' ' >> sorted_dependencies.txt
./count_dependencies.sh | sort -n -k 2 -t ' ' | cut -d ' ' -f 1 >> sorted_dependencies_no_number.txt
