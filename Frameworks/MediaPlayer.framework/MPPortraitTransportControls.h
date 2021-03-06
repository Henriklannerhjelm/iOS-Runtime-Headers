/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView;

@interface MPPortraitTransportControls : MPTransportControls  {
    UIImageView *_backgroundView;
}

+ (float)defaultHeight;

- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (void)dealloc;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)createVolumeSlider;
- (void)_layoutBasicParts;
- (void)_layoutComplexParts;

@end
