/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject  {
    BOOL _shouldRepeat;
    BOOL _shouldShuffle;
    BOOL _shouldPlayMusic;
    int _transition;
    int _secondsPerSlide;
    MPMediaItemCollection *_musicCollection;
}

+ (id)sharedInstance;
+ (int)randomTransition;

- (id)init;
- (void)dealloc;
- (int)transition;
- (void)setTransition:(int)arg1;
- (void)setPhotoDefaultValues;
- (BOOL)shouldRepeat;
- (BOOL)shouldShuffle;
- (int)secondsPerSlide;
- (BOOL)shouldPlayMusic;
- (void)setMusicCollection:(id)arg1;
- (id)musicCollection;
- (int)transitionForAnimationMovingForward:(BOOL)arg1;
- (void)setShouldPlayMusic:(BOOL)arg1;

@end
