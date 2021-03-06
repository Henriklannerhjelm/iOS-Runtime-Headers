/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CPZoneProfile, NSMutableArray, CPCharSequence;

@interface CPZone : CPRegion  {
    NSMutableArray *zoneBorders;
    struct CGPoint { float x1; float x2; } *outerVertices;
    struct CGPoint { float x1; float x2; } *swollenOuterVertices;
    double area;
    BOOL isStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
}


- (BOOL)isRectangular;
- (id)background;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hasBorders;
- (int)compareArea:(id)arg1;
- (void)setCharactersInZone:(id)arg1;
- (id)textLinesInZone;
- (id)leftGuides;
- (id)gutters;
- (void)setZoneBorders:(id)arg1;
- (BOOL)hasNeighborShape:(id)arg1;
- (void)removeUnfilledNeighborShapes;
- (long)borderZOrder;
- (long)neighborZOrder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })zoneBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })swollenZoneBounds;
- (BOOL)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4;
- (BOOL)canContain:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addPDFChar:(void*)arg1;
- (void)addContentFrom:(id)arg1;
- (void)setIsStraddleZone:(BOOL)arg1;
- (void)setZoneProfile:(id)arg1;
- (void)setLeftGuides:(id)arg1;
- (void)setRightGuides:(id)arg1;
- (void)setGutters:(id)arg1;
- (void)setSpacers:(id)arg1;
- (id)graphicsInZone;
- (id)charactersInZone;
- (id)spacers;
- (id)rightGuides;
- (id)zoneProfile;
- (BOOL)isStraddleZone;
- (double)area;
- (struct CGPoint { float x1; float x2; }*)swollenOuterVertices;
- (id)zoneBorders;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (unsigned int)wordCount;
- (BOOL)isZone;
- (unsigned int)vertexCount;
- (struct CGPoint { float x1; float x2; }*)outerVertices;
- (void)accept:(id)arg1;
- (BOOL)contains:(id)arg1;

@end
