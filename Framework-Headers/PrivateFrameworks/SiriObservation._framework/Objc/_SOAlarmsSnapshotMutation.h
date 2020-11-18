//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriObservation/SOAlarmsSnapshotMutating-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet, NSString, SOAlarmsSnapshot;

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating>
{
    SOAlarmsSnapshot *_baseModel;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_firingAlarmIDs;
    NSOrderedSet *_dismissedAlarmIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDate:1;
        unsigned int hasAlarmsByID:1;
        unsigned int hasFiringAlarmIDs:1;
        unsigned int hasDismissedAlarmIDs:1;
    } _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAlarmsByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDismissedAlarmIDs:(id)arg1;
- (void)setFiringAlarmIDs:(id)arg1;

@end
