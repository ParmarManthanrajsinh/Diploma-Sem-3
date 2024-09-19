# Write  a  program  that  defines  a  function  to  return  a  new  list  by  eliminating  the
# duplicate values in the list.


def remove_duplicate(List):
    return list(set(List))


numbers = [1, 2, 2, 3, 4, 4, 4, 5, 5, 6]
print(remove_duplicate(numbers))
