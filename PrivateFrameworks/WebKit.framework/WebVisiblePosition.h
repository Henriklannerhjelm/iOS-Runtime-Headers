/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebVisiblePosition : NSObject  {
    struct WebObjectInternal { } *_internal;
}

@property int affinity;

+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;
+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; })arg1;

- (BOOL)withinTextUnitOfGranularity:(int)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg1;
- (id)positionWithinAdjacentTextUnitOfGranularity:(int)arg1 inDirection:(int)arg2;
- (id)boundaryOfEnclosingTextUnitOfGranularity:(int)arg1 inDirection:(int)arg2;
- (int)textDirection;
- (BOOL)directionIsDownstream:(int)arg1;
- (id)nextCharacterBoundaryInDirection:(int)arg1;
- (id)nextWordBoundaryInDirection:(int)arg1;
- (id)nextSentenceBoundaryInDirection:(int)arg1;
- (id)nextLineBoundaryInDirection:(int)arg1;
- (id)nextParagraphBoundaryInDirection:(int)arg1;
- (id)nextDocumentBoundaryInDirection:(int)arg1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; })_visiblePosition;
- (id)positionAtStartOrEndOfWord;
- (BOOL)atAlphaNumericBoundaryInDirection:(int)arg1;
- (BOOL)requiresContextForWordBoundary;
- (int)affinity;
- (void)setAffinity:(int)arg1;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2;
- (int)compare:(id)arg1;
- (BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (int)distanceFromPosition:(id)arg1;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned long)arg2 withAffinityDownstream:(BOOL)arg3;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end
