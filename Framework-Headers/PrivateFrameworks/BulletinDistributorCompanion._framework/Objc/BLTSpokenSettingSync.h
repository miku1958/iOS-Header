//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSettingsGateway, BLTSettingSyncServer, NSDate, NSURL;
@protocol OS_dispatch_queue;

@interface BLTSpokenSettingSync : NSObject
{
    BOOL _localGlobalSpokenSettingEnabled;
    BOOL _remoteGlobalSpokenSettingEnabled;
    NSDate *_localGlobalSpokenSettingDate;
    NSDate *_remoteGlobalSpokenSettingDate;
    unsigned long long _updatingLocalStateFromRemoteCount;
    NSObject<OS_dispatch_queue> *_queue;
    BBSettingsGateway *_settingsGateway;
    BLTSettingSyncServer *_syncServer;
    NSURL *_remoteSettingStoreURL;
}

@property (strong, nonatomic) NSDate *localGlobalSpokenSettingDate; // @synthesize localGlobalSpokenSettingDate=_localGlobalSpokenSettingDate;
@property (nonatomic) BOOL localGlobalSpokenSettingEnabled; // @synthesize localGlobalSpokenSettingEnabled=_localGlobalSpokenSettingEnabled;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSDate *remoteGlobalSpokenSettingDate; // @synthesize remoteGlobalSpokenSettingDate=_remoteGlobalSpokenSettingDate;
@property (nonatomic) BOOL remoteGlobalSpokenSettingEnabled; // @synthesize remoteGlobalSpokenSettingEnabled=_remoteGlobalSpokenSettingEnabled;
@property (strong, nonatomic) NSURL *remoteSettingStoreURL; // @synthesize remoteSettingStoreURL=_remoteSettingStoreURL;
@property (strong, nonatomic) BBSettingsGateway *settingsGateway; // @synthesize settingsGateway=_settingsGateway;
@property (strong, nonatomic) BLTSettingSyncServer *syncServer; // @synthesize syncServer=_syncServer;
@property (nonatomic) unsigned long long updatingLocalStateFromRemoteCount; // @synthesize updatingLocalStateFromRemoteCount=_updatingLocalStateFromRemoteCount;

- (void).cxx_destruct;
- (BOOL)_queue_isUpdatingLocalStateFromRemote;
- (void)_queue_readSettings;
- (void)_queue_resolveState;
- (void)_queue_setNewLocalStateFromRemote:(BOOL)arg1;
- (void)_queue_setUpdatingLocalStateFromRemote;
- (void)_queue_synchronizeSettingsWithLocalEnabled:(BOOL)arg1;
- (BOOL)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(BOOL)arg1;
- (BOOL)_queue_updateLocalSetting;
- (void)_queue_writeLocalSetting;
- (void)_queue_writeRemoteSetting;
- (id)_remoteSettingStoreURL;
- (void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)arg1;
- (id)initWithSettingsGateway:(id)arg1 syncServer:(id)arg2;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg1 date:(id)arg2;

@end
