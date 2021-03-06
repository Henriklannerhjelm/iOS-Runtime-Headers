/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, PreferencesValueCell;

@interface EKEventRecurrenceEditItem : EKEventEditItem <EKCellShortener> {
    int _repeatType;
    int _originalRepeatType;
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    } _repeatEndGr;
    NSString *_customRepeatDescription;
    int _shorteningStatus;
    PreferencesValueCell *_dateCell;
}


- (void)reset;
- (void)dealloc;
- (int)numberOfSubitems;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (BOOL)validateRecurrenceType:(id)arg1;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (void)shortenCell:(id)arg1;
- (id)cellForSubitemAtIndex:(int)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
