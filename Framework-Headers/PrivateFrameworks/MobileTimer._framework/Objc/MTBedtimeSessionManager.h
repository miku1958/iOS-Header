//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTBedtimeSessionTrackerDelegate-Protocol.h>

@class HKHealthStore, MTAlarmStorage, NSString;
@protocol MTBedtimeSessionTracker, MTBedtimeSessionTrackerDelegate, NAScheduler;

@interface MTBedtimeSessionManager : NSObject <MTBedtimeSessionTrackerDelegate>
{
    id<NAScheduler> _serializer;
    MTAlarmStorage *_alarmStorage;
    HKHealthStore *_healthStore;
    NSString *_archivedSessionDataPath;
    NSString *_archivedSessionDataFile;
    id<MTBedtimeSessionTracker> _bedtimeSessionTracker;
    id<MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
}

@property (strong, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property (copy, nonatomic) NSString *archivedSessionDataFile; // @synthesize archivedSessionDataFile=_archivedSessionDataFile;
@property (copy, nonatomic) NSString *archivedSessionDataPath; // @synthesize archivedSessionDataPath=_archivedSessionDataPath;
@property (strong, nonatomic) id<MTBedtimeSessionTracker> bedtimeSessionTracker; // @synthesize bedtimeSessionTracker=_bedtimeSessionTracker;
@property (weak, nonatomic) id<MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate; // @synthesize bedtimeSessionTrackerDelegate=_bedtimeSessionTrackerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (readonly) Class superclass;

+ (id)platformSpecificSourceBundleIdentifier;
+ (id)sleepSampleWithInterval:(id)arg1 sampleType:(long long)arg2 metadata:(id)arg3;
- (void).cxx_destruct;
- (BOOL)_hasUnprocessedSessions;
- (void)_removeSessionDataFile;
- (id)_unprocessedSessions;
- (id)_writeSessionData;
- (id)_writeSessions:(id)arg1;
- (void)archiveSession:(id)arg1;
- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (void)deviceFirstUnlocked;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 bedtimeSessionTracker:(id)arg3;
- (void)saveSessionData;
- (void)waitForUnlock;
- (id)writeSession:(id)arg1;

@end
