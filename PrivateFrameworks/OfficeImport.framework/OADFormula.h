/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OADFormula : NSObject  {
    int mType;
    struct OADFormulaArg { 
        int type; 
        int value; 
    } mArgs[3];
    NSString *mName;
}


- (int)type;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)initWithType:(int)arg1 arg0:(struct OADFormulaArg { int x1; int x2; })arg2 arg1:(struct OADFormulaArg { int x1; int x2; })arg3 arg2:(struct OADFormulaArg { int x1; int x2; })arg4;
- (struct OADFormulaArg { int x1; int x2; })argAtIndex:(unsigned int)arg1;

@end
