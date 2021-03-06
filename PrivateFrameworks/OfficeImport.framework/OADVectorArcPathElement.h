/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADVectorArcPathElement : OADPathElement  {
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mLeft;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mTop;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mRight;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mBottom;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mStartVector;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mEndVector;
    BOOL mClockwise;
    BOOL mConnectedToPrevious;
}


- (BOOL)clockwise;
- (id)initWithLeft:(struct OADAdjustCoord { BOOL x1; int x2; })arg1 top:(struct OADAdjustCoord { BOOL x1; int x2; })arg2 right:(struct OADAdjustCoord { BOOL x1; int x2; })arg3 bottom:(struct OADAdjustCoord { BOOL x1; int x2; })arg4 startVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg5 endVector:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg6 clockwise:(BOOL)arg7 connectedToPrevious:(BOOL)arg8;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })startVector;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })endVector;
- (BOOL)connectedToPrevious;
- (struct OADAdjustCoord { BOOL x1; int x2; })right;
- (struct OADAdjustCoord { BOOL x1; int x2; })left;
- (struct OADAdjustCoord { BOOL x1; int x2; })bottom;
- (struct OADAdjustCoord { BOOL x1; int x2; })top;

@end
