/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSMatchingPredicateOperator : NSStringPredicateOperator  {
    int _contextLock;

  /* Error parsing encoded ivar type info: ^{?=@"NSString"^v} */
    struct { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const int x6; in void*x7; void*x8; void *x9; } *_regexContext;

}


- (void)finalize;
- (SEL)selector;
- (void)dealloc;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3;
- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;

@end
