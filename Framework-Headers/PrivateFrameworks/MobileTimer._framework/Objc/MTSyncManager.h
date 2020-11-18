//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTSyncService-Protocol.h>
#import <MobileTimer/MTSyncServiceDelegate-Protocol.h>

@class MTMetrics, MTPairedSyncCoordinator, NSString;
@protocol MTSyncDataModel><MTAgentDiagnosticDelegate, MTSyncService><MTAgentDiagnosticDelegate, NAScheduler;

@interface MTSyncManager : NSObject <MTSyncServiceDelegate, MTAgentDiagnosticDelegate, MTSyncService>
{
    BOOL _started;
    id<NAScheduler> _serializer;
    id<MTSyncDataModel><MTAgentDiagnosticDelegate> _alarmSyncDataModel;
    id<MTSyncService><MTAgentDiagnosticDelegate> _internalSyncService;
    MTPairedSyncCoordinator *_syncCoordinator;
    MTMetrics *_syncMetrics;
}

@property (strong, nonatomic) id<MTSyncDataModel><MTAgentDiagnosticDelegate> alarmSyncDataModel; // @synthesize alarmSyncDataModel=_alarmSyncDataModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<MTSyncService><MTAgentDiagnosticDelegate> internalSyncService; // @synthesize internalSyncService=_internalSyncService;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (nonatomic) BOOL started; // @synthesize started=_started;
@property (readonly) Class superclass;
@property (strong, nonatomic) MTPairedSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property (strong, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;

+ (id)_stringForMode:(long long)arg1;
- (void).cxx_destruct;
- (void)_performSyncOperation:(id)arg1;
- (id)initWithMode:(long long)arg1 alarmSyncDataModel:(id)arg2;
- (id)initWithMode:(long long)arg1 alarmSyncDataModel:(id)arg2 syncMetrics:(id)arg3;
- (void)performSyncOperation:(id)arg1;
- (void)printDiagnostics;
- (void)service:(id)arg1 didBeginSyncOperation:(id)arg2;
- (void)service:(id)arg1 didCompleteSyncOperation:(id)arg2;
- (void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3;
- (void)service:(id)arg1 didRequestSyncOperation:(id)arg2;
- (void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3;
- (void)setup;
- (void)start;
- (void)stop;
- (void)teardown;

@end
