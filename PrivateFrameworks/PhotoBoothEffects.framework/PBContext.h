/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBContext : NSObject  {
}

@property(retain) struct __CVPixelBufferPool { }* largePool;
@property(retain) struct __CVPixelBufferPool { }* smallPool;
@property struct _CAImageQueue { }* outputImageQueue;

+ (id)openGLContext;
+ (id)openCLContext;

- (id)init;
- (void)setSmallPool:(struct __CVPixelBufferPool { }*)arg1;
- (struct __CVPixelBufferPool { }*)smallPool;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)preloadFilter:(id)arg1;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct _CAImageQueue { }*)outputImageQueue;
- (void)setOutputImageQueue:(struct _CAImageQueue { }*)arg1;
- (struct __CVPixelBufferPool { }*)largePool;
- (void)setLargePool:(struct __CVPixelBufferPool { }*)arg1;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface { }*)arg2 mirrored:(BOOL)arg3 surfaceResultHandler:(id)arg4;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface { }*)arg2 mirrored:(BOOL)arg3 resultHandler:(id)arg4;

@end
