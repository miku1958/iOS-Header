//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/SignpostSupportMachTimeTranslator.h>

@interface SignpostSupportMachTimeTranslator (Collection)
+ (void)_addListeningTimeTranslator:(id)arg1;
+ (id)_globalNotificationDispatchQueue;
+ (void)_processPowerNotificationOfType:(unsigned int)arg1 withNotificationID:(long long)arg2;
+ (void)_removeListeningTimeTranslator:(id)arg1;
+ (void)_snapshotMachTimesForAllListeners;
+ (id)_timeTranslationLog;
- (void)_grabMachTimesSnapshot;
- (id)dataRepresentationDuringMonitoring;
- (id)initWithMaxEntries:(unsigned long long)arg1;
- (void)startMonitoringSleepWake;
- (void)stopMonitoringSleepWake;
@end
