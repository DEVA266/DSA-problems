def nested_list ():
    # https://www.hackerrank.com/challenges/nested-list/problem?isFullScreen=true
    if __name__ == '__main__':
        records = []
        marks = []
        for _ in range(int(input())):
            x = []
            name = input()
            score = float(input())
            x = [name,score]
            records.append(x)
            marks.append(score)
        print(records)
        print(marks)
        second_lowest = sorted(marks)[1]
        names = []
        for i in range(len(records)):
            if second_lowest == records[i][1]:
                names.append(records[i][0])
        print(f"The second lowest names are : \n{sorted(names)}")


nested_list()