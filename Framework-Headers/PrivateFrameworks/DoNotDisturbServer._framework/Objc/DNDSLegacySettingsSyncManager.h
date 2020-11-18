//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSSettingsSyncManager-Protocol.h>

@class NPSDomainAccessor, NPSManager, NSString;
@protocol DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager>
{
    BOOL _listen;
    BOOL _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    id<DNDSSettingsSyncManagerDataSource> _dataSource;
    id<DNDSSettingsSyncManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<DNDSSettingsSyncManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSSettingsSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)cleanupState;
+ (id)receiveManagerForPairedDevice:(id)arg1;
+ (id)sendManagerForPairedDevice:(id)arg1;
- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_initWithListen:(BOOL)arg1 send:(BOOL)arg2 pairedDevice:(id)arg3;
- (void)_propagateBypassSettings:(id)arg1;
- (void)_propagateScheduleSettings:(id)arg1;
- (void)_updateBypassSettings;
- (void)_updateScheduleSettingsWithDate:(id)arg1;
- (void)dealloc;
- (void)resume;
- (void)update;

@end
