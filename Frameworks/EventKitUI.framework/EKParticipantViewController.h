/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKParticipant;

@interface EKParticipantViewController : ABPersonViewController <ABPersonViewControllerDelegate> {
    EKParticipant *_participant;
}


- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)setParticipant:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)initWithParticipant:(id)arg1;

@end
