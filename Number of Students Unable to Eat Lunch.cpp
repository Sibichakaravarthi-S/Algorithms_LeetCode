class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stu_1=0,stu_0=0;

        for(int i=0;i<students.size();i++){
            (students[i]==1)?stu_1++:stu_0++;           
        }
 
 
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                if(stu_0>0){
                    stu_0--;
                }
                else{
                    return stu_1;
                }

            }
            else{
                  if(stu_1>0){
                    stu_1--;
                }
                else{
                    return stu_0;
                }
            }
        }
        return 0;
    }
};