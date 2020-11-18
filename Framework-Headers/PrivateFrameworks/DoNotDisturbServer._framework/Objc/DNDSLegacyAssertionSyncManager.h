//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSAssertionSyncManager-Protocol.h>

@class DNDSClientDetailsProvider, NPSDomainAccessor, NPSManager, NSString;
@protocol DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, OS_dispatch_queue;

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager>
{
    NSObject<OS_dispatch_queue> *_queue;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    id<DNDSLegacyAssertionSyncManagerDataSource> _dataSource;
    id<DNDSAssertionSyncManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<DNDSLegacyAssertionSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;
- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_queue_gizmoUpdateDate;
- (void)_queue_updateCompanionAssertionMirroringForState:(id)arg1;
- (BOOL)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg1 modeAssertionUpdateContext:(id)arg2;
- (void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg1;
- (void)_queue_updateGizmoToggleSyncForState:(id)arg1 companionUpdateDate:(id)arg2 reason:(unsigned long long)arg3;
- (void)_queue_updateToggleSyncForReason:(unsigned long long)arg1;
- (void)_updateForReason:(unsigned long long)arg1;
- (void)_updateGizmoAssertionSync;
- (void)dealloc;
- (id)initWithClientDetailsProvider:(id)arg1 pairedDevice:(id)arg2;
- (void)resume;
- (void)updateForStateUpdate:(id)arg1;

@end
