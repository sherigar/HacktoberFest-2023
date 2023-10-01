import java.util.Scanner;

class Matrix
{
    long[][] mat;
    int r,c;
    Matrix(int c, int r)
    {
        this.r=r;
        this.c=c;
        mat = new long[r][c];
    }
    void setInput(long data,int i,int j)
    {
        mat[i][j] = data;
    }

    void Add(Matrix m1,Matrix m2)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
    }

    void Display()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
    }

    void Sub(Matrix m1,Matrix m2)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
            }
        }
    }

    void Mul(Matrix m1,Matrix m2)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mat[i][j]=0;
                for(int k=0;k<c;k++)
                {
                    mat[i][j] += m1.mat[i][k] * m2.mat[k][j];
                }
            }
        }
    }
}

class MatrixOperation
{
    public static void main(String args[])
    {
        int r,c;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no row: ");
        r=sc.nextInt();
        System.out.println("Enter the no. of columns: ");
        c=sc.nextInt();

        Matrix m1 = new Matrix(r,c);
        System.out.println("Enter Martix: ");
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                System.out.print("Enter the matrix element "+(i+1)+" "+(j+1)+": ");
                long data=sc.nextLong();
                m1.setInput(data,i,j);
            }
        }
        Matrix m2 = new Matrix(r,c);
        System.out.println("Enter Martix: ");
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                System.out.print("Enter the matrix element "+(i+1)+" "+(j+1)+": ");
                long data=sc.nextLong();
                m2.setInput(data,i,j);
            }
        }

        Matrix m3 = new Matrix(r,c);
        System.out.println("Martix Addition: ");
        m3.Add(m1,m2);
        m3.Display();

        System.out.println("Martix Subtraction: ");
        m3.Sub(m1,m2);
        m3.Display();

        System.out.println("Martix Multiplication: ");
        m3.Mul(m1,m2);
        m3.Display();
    }
}