/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMovieMediaObject;

@interface SURemakeMovieMediaObjectOperation : ISOperation  {
    SUMovieMediaObject *_movie;
}

@property(readonly) SUMovieMediaObject * movieMediaObject;


- (void)run;
- (id)init;
- (void)dealloc;
- (id)movieMediaObject;
- (id)initWithMovieMediaObject:(id)arg1;
- (BOOL)_movieNeedsRemakeForMode:(id)arg1;

@end
