class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        
        for i in range(9):
            l,m,k=set(),set(),set()
            for j in range(9):
                if board[i][j]!='.':
                    if board[i][j] in l :
                        return False
                    l.add(board[i][j])
                if board[j][i]!='.': 
                    if board[j][i] in m:
                        return False
                    m.add(board[j][i])
                r=3*(i//3)+j//3
                c=j%3+3*(i%3)
                if board[r][c] != '.': 
                    if board[r][c] in k:
                        return False
                    k.add(board[r][c])
                    
        return True 
