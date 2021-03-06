/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectionNode, UIWebSelection, UIWebSelectionGraph;

@interface UIWebSelectionNode : NSObject  {
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    BOOL _invalid;
}

@property(retain) UIWebSelection * selection;


- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (id*)nodeByReferenceFromEdge:(int)arg1 outwards:(BOOL)arg2;
- (int)oppositeEdge:(int)arg1;
- (id)nodeByMovingEdge:(int)arg1 outwards:(BOOL)arg2;
- (id)selection;
- (void)setSelection:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end
