//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>

@class HMApplicationData, HMDelegateCaller, HMFMessageDispatcher, HMHome, HMPendingRequests, HMThreadSafeMutableArrayCollection, HMXpcClient, NSArray, NSOperationQueue, NSString, NSUUID, _HMLocationHandler;
@protocol HMHomeManagerDelegate, OS_dispatch_queue;

@interface HMHomeManager : NSObject <HMFMessageReceiver, HMMutableApplicationData>
{
    BOOL _thisDeviceResidentCapable;
    BOOL _residentEnabledForThisDevice;
    BOOL _accessAllowedWhenLocked;
    BOOL _didUpdateHomes;
    BOOL _fetchInProgress;
    BOOL _dataSyncInProgress;
    BOOL _viewServiceActive;
    id<HMHomeManagerDelegate> _delegate;
    HMHome *_primaryHome;
    HMHome *_currentHome;
    HMApplicationData *_applicationData;
    unsigned long long _dataSyncState;
    unsigned long long _residentProvisioningStatus;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMThreadSafeMutableArrayCollection *_currentHomes;
    HMThreadSafeMutableArrayCollection *_homeInvitations;
    HMXpcClient *_xpcClient;
    HMFMessageDispatcher *_msgDispatcher;
    NSOperationQueue *_mergeOperationQueue;
    NSUUID *_uuid;
    unsigned long long _generationCounter;
    HMPendingRequests *_pendingRequests;
    unsigned long long _metadataVersion;
    HMDelegateCaller *_delegateCaller;
    _HMLocationHandler *_locationHandler;
    NSString *_homeCacheDir;
    NSString *_homeCache;
}

@property (getter=isAccessAllowedWhenLocked) BOOL accessAllowedWhenLocked; // @synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked;
@property (readonly, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (strong, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *currentHomes; // @synthesize currentHomes=_currentHomes;
@property (nonatomic, getter=isDataSyncInProgress) BOOL dataSyncInProgress; // @synthesize dataSyncInProgress=_dataSyncInProgress;
@property (nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMHomeManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didUpdateHomes; // @synthesize didUpdateHomes=_didUpdateHomes;
@property (nonatomic) BOOL fetchInProgress; // @synthesize fetchInProgress=_fetchInProgress;
@property (nonatomic) unsigned long long generationCounter; // @synthesize generationCounter=_generationCounter;
@property (readonly) unsigned long long hash;
@property (strong) NSString *homeCache; // @synthesize homeCache=_homeCache;
@property (strong) NSString *homeCacheDir; // @synthesize homeCacheDir=_homeCacheDir;
@property (strong, nonatomic) HMThreadSafeMutableArrayCollection *homeInvitations; // @synthesize homeInvitations=_homeInvitations;
@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly, nonatomic) _HMLocationHandler *locationHandler; // @synthesize locationHandler=_locationHandler;
@property (strong, nonatomic) NSOperationQueue *mergeOperationQueue; // @synthesize mergeOperationQueue=_mergeOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (nonatomic) unsigned long long metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) HMPendingRequests *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property (strong, nonatomic) HMHome *primaryHome; // @synthesize primaryHome=_primaryHome;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (getter=isResidentEnabledForThisDevice) BOOL residentEnabledForThisDevice; // @synthesize residentEnabledForThisDevice=_residentEnabledForThisDevice;
@property unsigned long long residentProvisioningStatus; // @synthesize residentProvisioningStatus=_residentProvisioningStatus;
@property (readonly) Class superclass;
@property (getter=isThisDeviceResidentCapable) BOOL thisDeviceResidentCapable; // @synthesize thisDeviceResidentCapable=_thisDeviceResidentCapable;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (nonatomic, getter=isViewServiceActive) BOOL viewServiceActive; // @synthesize viewServiceActive=_viewServiceActive;
@property (strong, nonatomic) HMXpcClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (BOOL)dataSyncInProgressFromDataSyncState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_acceptInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_acceptInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addHomeWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkEventValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_declineInvitation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteDuetEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_determineCacheDirectory;
- (void)_determineCacheFile;
- (void)_dumpCache:(id)arg1;
- (void)_dumpHomeConfigurationFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dumpState:(id)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchHomeConfigurationVerifyCacheRefreshRequested:(BOOL)arg1;
- (void)_fetchHomeConfigurationWithCache:(BOOL)arg1 refreshRequested:(BOOL)arg2;
- (void)_fetchHomeConfigurationWithPrivacyCheckWithCache:(BOOL)arg1 refreshRequested:(BOOL)arg2;
- (void)_handleAccessAllowedWhenLockedUpdatedNotification:(id)arg1;
- (void)_handleAppDataUpdatedNotification:(id)arg1;
- (void)_handleCurrentHomeChangedNotification:(id)arg1;
- (void)_handleDataStateChangedChangedNotification:(id)arg1;
- (void)_handleHomeAddedNotification:(id)arg1;
- (void)_handleHomeRemovedNotification:(id)arg1;
- (void)_handleHomesDidUpdateNotification:(id)arg1;
- (void)_handleMetadataUpdatedNotification:(id)arg1;
- (void)_handlePrimaryChangedNotification:(id)arg1;
- (void)_handleQueryHomeKitUsageStateResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResidentDeviceCapableUpdatedNotification:(id)arg1;
- (void)_handleResidentEnabledForThisDeviceUpdatedNotification:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_handleUserInvitationsUpdatedNotification:(id)arg1;
- (id)_homeWithUUID:(id)arg1;
- (BOOL)_isValidCachedHomeConfiguration:(id)arg1;
- (void)_logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_logControl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_mergeCurrentAppDataWithNewAppData:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2;
- (void)_mergeCurrentHomesWithNewHomes:(id)arg1 newPrimaryHome:(id)arg2 newCurrentHome:(id)arg3 newInvitations:(id)arg4 newAppData:(id)arg5 refreshRequested:(BOOL)arg6;
- (void)_notifyAccessAllowedWhenLockedUpdated:(BOOL)arg1;
- (void)_notifyDelegateOfAppDataUpdate;
- (void)_notifyResidentProvisioningStatus:(unsigned long long)arg1;
- (void)_pingDeviceWithUUID:(id)arg1 secure:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_primaryAccountDidChange:(id)arg1 modified:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_primaryAccountWasDeletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_privateDelegate;
- (void)_processHomeConfigurationRequest:(id)arg1 refreshRequested:(BOOL)arg2;
- (void)_queryHomeKitUsageStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_queryMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queryVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_queryiCloudSwitchStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_registerNotificationHandlers;
- (void)_removeCacheFile;
- (void)_removeHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_restartWithHomeConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)_shouldDisplayiCloudSwitchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_start;
- (void)_updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAppData:(id)arg1;
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateCurrentHome:(id)arg1;
- (void)_updateDataSyncState:(id)arg1;
- (void)_updateHomes:(id)arg1;
- (void)_updateInvitation:(id)arg1 presenceAuthStatus:(unsigned long long)arg2 invitationState:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updatePrimaryHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateiCloudSwitchState:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addHomeWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkEventValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteDuetEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dumpHomeConfigurationFile:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dumpState:(id)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)eraseHomeDataAndDeleteMetadata:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)eraseHomeDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)incomingHomeInvitations;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)logAppViewEvent:(id)arg1 name:(id)arg2 uuid:(id)arg3 information:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)logControl:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyResidentCapableUpdated:(BOOL)arg1;
- (void)notifyResidentEnabledUpdated:(BOOL)arg1;
- (void)primaryAccountDidChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)primaryAccountWasDeletedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)primaryAccountWasModified:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryHomeKitUsageStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queryVersionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)queryiCloudSwitchStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetConfiguration:(BOOL)arg1 withoutPopup:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)restartWithHomeConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
- (void)setMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)shouldDisplayiCloudSwitchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAccessAllowedWhenLocked:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updatePrimaryHome:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateResidentEnabledForThisDevice:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateiCloudSwitchState:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

