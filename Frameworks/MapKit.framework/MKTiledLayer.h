/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTiledLayer : CATiledLayer  {
    struct $_837 { 
        unsigned int displayBaseTiles : 1; 
        unsigned int delegateDisplayBaseTiles : 1; 
        unsigned int delegateRenderLayer : 1; 
    } _flags;
}

@property(readonly) struct CADoubleRect { struct CADoublePoint { double x; double y; } origin; struct CADoubleSize { double width; double height; } size; } visibleDoubleRect;

+ (struct CGSize { float x1; float x2; })contentSize;
+ (id)defaultValueForKey:(id)arg1;
+ (unsigned int)levelsOfDetail;
+ (unsigned int)prefetchedTiles;
+ (int)minZoomLevel;
+ (int)maxZoomLevel;
+ (double)fadeDuration;

- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)flush;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplayInTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (void)displayBaseTiles;
- (void)displayTilePath:(struct { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; }*)arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })visibleDoubleRect;
- (void)display;

@end
