/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 21:28:30 by sbratche          #+#    #+#             */
/*   Updated: 2017/12/12 21:28:35 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putstr(char *str);
int		ft_isupper(int c);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *s);
void	ft_multiple_free(char **str);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_first_validation(char *str);
char	**ft_create_matrix(char *one_string);
char	*ft_push_to_upperleft(char *s, int dots);
void	ft_read_buffer(int fd);
void	ft_move_tetrimino(char *one_tetrimino);
char	**ft_strsplit(char const *s, char c);
char	**ft_map_initial_map(char *str);
int		ft_sqrt(int nb);
void	ft_solve_map(char **map, char **matrix, int size, int number);
int		ft_place_tetrimino(char **map, int i, int j, char *matrix);
int		ft_count_first_dots(char *s);
int		ft_validate_place(char **map, int i, int j, char *matrix);
char	**ft_increase_map(char **map, int *size, int *i_init, int *j_init);
void	ft_print_map(char **map);
char	**ft_free_some_space(char **map, int *letter_nr,
								int *i_rem, int *j_rem);
void	ft_place_first(char **map, int *i, int *j, char *matrix);
int		ft_second_validation(char **matrix, int i, int j, int x);

#endif
