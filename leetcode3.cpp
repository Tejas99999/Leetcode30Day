class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int count=0;
//         for(int i=0;i<magazine.length();i++)
//         {
//             for(int j=0;j<ransomNote.length();j++)
//             {
//                 if(magazine[i]==ransomNote[j])
//                 {
//                 count++;
//                 break;

//                 }
//             }
//             if(ransomNote.length()==count)
//             return true;

//         }
//         if(ransomNote.length()==count)
//             return true;
//         else

//             return false;
        for(int i=0;i<ransomNote.length();i++)
        {
            for(int j=0;j<magazine.length();j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    count++;
                    magazine.erase(j,1);
                    break;
                }
            }
        }
        if(count==ransomNote.length())
            return true;
        else
            return false;


    }
};
