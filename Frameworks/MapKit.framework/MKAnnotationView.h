/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIImage, <MKAnnotation>, MKAnnotationViewInternal, NSString, UIView;

@interface MKAnnotationView : UIView  {
    MKAnnotationViewInternal *_internal;
}

@property(readonly) NSString * reuseIdentifier;
@property(retain) <MKAnnotation> * annotation;
@property(retain) UIImage * image;
@property struct CGPoint { float x; float y; } centerOffset;
@property struct CGPoint { float x; float y; } calloutOffset;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property BOOL canShowCallout;
@property(retain) UIView * leftCalloutAccessoryView;
@property(retain) UIView * rightCalloutAccessoryView;
@property(getter=isDraggable) BOOL draggable;
@property unsigned int dragState;

+ (unsigned int)_selectedZIndex;
+ (id)_streetViewButtonImage;
+ (id)_streetViewButtonDisabledImage;
+ (id)_streetViewButtonPressedImage;
+ (id)_disclosureCalloutButton;
+ (id)_streetViewCalloutButton;
+ (unsigned int)_zIndex;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_initializeSafeCategory;

- (id)reuseIdentifier;
- (id)annotation;
- (void)setAnnotation:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)image;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (BOOL)isEnabled;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_canChangeOrientation;
- (id)_searchResult;
- (unsigned int)_mapType;
- (void)_setZIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (BOOL)canShowCallout;
- (id)_calloutView;
- (void)_setCalloutView:(id)arg1;
- (id)_contentLayer;
- (void)_updateZIndex;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanoramaID:(id)arg1;
- (BOOL)_hasSearchResult;
- (BOOL)_canDisplayDisclosureInCallout;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (BOOL)_canDisplayPlacemarkInCallout;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (void)_setCanDisplayStreetViewInCallout:(BOOL)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)_setZIndex:(unsigned int)arg1 notify:(BOOL)arg2;
- (void)_resetZIndex;
- (id)_annotationContainer;
- (BOOL)_hasAlternateOrientation;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_mapTransform;
- (id)rightCalloutAccessoryView;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)_orientationCount;
- (id)panoramaID;
- (unsigned int)_zIndex;
- (int)_annotationViewType;
- (BOOL)_canDisplayStreetViewInCallout;
- (void)set_mapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })centerOffset;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDragState:(unsigned int)arg1;
- (unsigned int)dragState;
- (BOOL)isDraggable;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setCanShowCallout:(BOOL)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)setDraggable:(BOOL)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;

@end
