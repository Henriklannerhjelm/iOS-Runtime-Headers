/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIView;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_originalTypedTextRect;
    NSString *m_typedText;
    NSString *m_correction;
    UIView *m_typedTextView;
    UIView *m_correctionView;
    UIView *m_correctionAnimationView;
    UIView *m_typedTextAnimationView;
    UIView *m_correctionShadowView;
    BOOL m_fits;
    BOOL m_mouseDown;
    id m_delegate;
    unsigned int m_index;
    int m_promptTextType;
}

+ (void)_initializeSafeCategory;

- (void)dismiss;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousPage;
- (unsigned int)currentIndex;
- (id)candidateAtIndex:(unsigned int)arg1;
- (int)textEffectsVisibilityLevelWhenKey;
- (int)textEffectsVisibilityLevel;
- (unsigned int)numberOfShownItems;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (id)currentCandidate;
- (void)configureKeyboard:(id)arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (void)removePromptSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowFrameForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (void)layout;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)setCandidateObject:(id)arg1 type:(int)arg2 typedText:(id)arg3 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (float)maximumCandidateWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(int)arg2 withExtraGap:(float)arg3;
- (id)typedTextAnimationView;
- (void)_candidateSelected:(id)arg1;
- (unsigned int)index;
- (void)showPreviousCandidate;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (id)typedText;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)typedTextView;
- (id)correctionView;
- (id)correctionAnimationView;
- (id)correctionShadowView;
- (id)correction;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setSelectedItem:(unsigned int)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)accessibilityTreeHidden;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;

@end
