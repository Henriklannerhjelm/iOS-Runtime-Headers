/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell  {
    NSString *_organizerName;
    UILabel *_organizerView;
    UILabel *_titleView;
}

+ (void)_initializeSafeCategory;

- (id)_titleView;
- (BOOL)update;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (BOOL)hasCustomLayout;
- (BOOL)shouldDisplayForEditModel;
- (id)_organizerView;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;

@end
