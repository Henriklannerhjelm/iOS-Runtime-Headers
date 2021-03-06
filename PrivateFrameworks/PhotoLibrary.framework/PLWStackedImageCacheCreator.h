/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageLoadingQueue, MLPhotoLibrary, PLWStackedImageCache, PLImageCache, PLImageSource, NSArray;

@interface PLWStackedImageCacheCreator : NSObject <PLStackViewDataSource, PLCachedFilesManagerPlugin> {
    MLPhotoLibrary *_library;
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_stackImageSource;
    PLWStackedImageCache *_stackedImageCache;
    NSArray *_albums;
    BOOL _cancel;
}


- (void)cancel;
- (void)dealloc;
- (void)createStackedImageForAlbumIndex:(id)arg1;
- (BOOL)recreateCachedFilesIfNecessary;
- (int)stackViewItemCount:(id)arg1;
- (id)stackView:(id)arg1 textBadgeStringForImageAtIndex:(int)arg2;
- (int)stackViewPosterItemIndex:(id)arg1;
- (id)stackedImageForStackView:(id)arg1 options:(id*)arg2;
- (void)stackView:(id)arg1 saveStackedImage:(id)arg2 options:(id)arg3;
- (void)createStackedImageForAlbum:(id)arg1 withNewlyInsertedPhoto:(id)arg2;
- (id)_albums;
- (id)stackView:(id)arg1 itemViewAtIndex:(int)arg2 loadImagesSynchronously:(BOOL)arg3;
- (void)stackView:(id)arg1 invalidateCachedImagesForIndex:(int)arg2;
- (id)stackView:(id)arg1 dataForImageAtIndex:(int)arg2 imageData:(struct { int x1; int x2; int x3; int x4; int x5; int x6; BOOL x7; }*)arg3;
- (id)initWithImageCache:(id)arg1;

@end
