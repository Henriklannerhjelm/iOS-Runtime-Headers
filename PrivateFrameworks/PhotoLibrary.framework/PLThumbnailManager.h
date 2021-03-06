/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPhotoLibrary, NSIndexSet, NSArray, NSLock, PLImageTable, NSDictionary;

@interface PLThumbnailManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    float _indexSheetBorderWidth;
    PLImageTable *_indexSheetThumbs;
    PLImageTable *_wildcatScrubberThumbs;
    PLImageTable *_wildcatIndexThumbs;
    PLImageTable *_wildcatStackThumbs;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
}

@property PLPhotoLibrary * photoLibrary;

+ (void)removeImageTables;
+ (int)thumbnailFormat;
+ (int)thumbnailVersion;
+ (void)removeObsoleteMetadata;

- (void)dealloc;
- (int)count;
- (id)_dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9 preheat:(BOOL)arg10;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)_bakedThumbnailForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)rotateThumbnailsForPhoto:(id)arg1 byDegrees:(int)arg2;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (id)photoLibrary;
- (void)preheatImageDataForImages:(id)arg1 withFormat:(int)arg2;
- (void)setPhotoLibrary:(id)arg1;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (void)deleteThumbnailsAtIndex:(int)arg1;
- (id)photoUUIDToIndexMap;
- (void)thumbnailTablesChangedExternally;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (id)compactImageTables;
- (void)deleteThumbnailsForPhoto:(id)arg1;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (void)ensureIndexExists:(int)arg1;
- (id)initWithWeakPhotoLibrary:(id)arg1;

@end
