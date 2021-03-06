/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSOperationQueue, EKAlarmEngineOperation, NSTimer;

@interface EKAlarmEngine : NSObject  {
    struct CalDatabase { struct __CFRuntimeBase { 
            unsigned int _cfisa; 
            unsigned char _cfinfo[4]; 
        } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { 
            long __sig; 
            BOOL __opaque[40]; 
        } x6; boolx7; boolx8; unsigned int x9; unsigned int x10; struct __CFString {} *x11; int x12; int x13; struct __CFString {} *x14; } *_database;
    EKAlarmEngineOperation *_currentOp;
    NSOperationQueue *_queue;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
}


- (void)_update;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)initWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct __CFDictionary {} *x5; struct _opaque_pthread_mutex_t { long x_6_1_1; BOOL x_6_1_2[40]; } x6; boolx7; boolx8; unsigned int x9; unsigned int x10; struct __CFString {} *x11; int x12; int x13; struct __CFString {} *x14; }*)arg1;
- (void)reschedule;
- (void)_eventStoreChanged:(id)arg1;
- (void)_timeZoneChanged:(id)arg1;
- (void)_resetSyncTimer;
- (void)_killSyncTimer;
- (void)_syncTimerFired:(id)arg1;
- (void)syncDidStart;
- (void)syncDidEnd;

@end
