//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate>
{
    NSMutableArray *_vteiList;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *vteiList; // @synthesize vteiList=_vteiList;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2;
- (void)_filterVTEIArray;
- (void)addPHSAcceptEntryAndSubmit:(id)arg1;
- (void)addPHSRejectEntry:(id)arg1;
- (id)init;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;

@end
