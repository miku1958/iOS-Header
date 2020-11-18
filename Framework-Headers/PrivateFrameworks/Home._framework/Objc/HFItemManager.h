//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAccessoryObserver-Protocol.h>
#import <Home/HFCameraObserver-Protocol.h>
#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>
#import <Home/HFItemUpdating-Protocol.h>
#import <Home/HFMediaProfileObserver-Protocol.h>
#import <Home/HFMediaSessionObserver-Protocol.h>
#import <Home/HFResidentDeviceObserver-Protocol.h>
#import <Home/HFSoftwareUpdateControllerObserver-Protocol.h>
#import <Home/HFSoftwareUpdateObserver-Protocol.h>
#import <Home/HFStateDumpSerializable-Protocol.h>
#import <Home/HFTemperatureUnitObserver-Protocol.h>

@class HFItem, HFItemManagerBatchedDelegateAdapter, HMHome, NAFuture, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol HFCharacteristicReadPolicy, HFItemManagerDelegate;

@interface HFItemManager : NSObject <HFStateDumpSerializable, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFResidentDeviceObserver, HFCameraObserver, HFMediaSessionObserver, HFMediaProfileObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFTemperatureUnitObserver, HFItemUpdating>
{
    BOOL _hasRequestedFirstUpdate;
    id<HFItemManagerDelegate> _delegate;
    HFItem *_sourceItem;
    HMHome *_home;
    NSArray *_itemProviders;
    id<HFCharacteristicReadPolicy> _readPolicy;
    unsigned long long _overallLoadingState;
    NAFuture *_firstFastUpdateFuture;
    HMHome *_lastUpdatedHome;
    NSArray *_sections;
    NSMapTable *_childItemsByParentItem;
    NSMutableDictionary *_suppressedCharacteristicUpdatesByReason;
    NSMutableSet *_disableUpdateReasons;
    HFItemManagerBatchedDelegateAdapter *_batchedDelegateAdapterAllowingReads;
    HFItemManagerBatchedDelegateAdapter *_batchedDelegateAdapterDisallowingReads;
    NAFuture *_firstFullUpdateFuture;
}

@property (readonly, nonatomic) NSSet *allDisplayedItems;
@property (readonly, nonatomic) NSSet *allItems;
@property (strong, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterAllowingReads; // @synthesize batchedDelegateAdapterAllowingReads=_batchedDelegateAdapterAllowingReads;
@property (strong, nonatomic) HFItemManagerBatchedDelegateAdapter *batchedDelegateAdapterDisallowingReads; // @synthesize batchedDelegateAdapterDisallowingReads=_batchedDelegateAdapterDisallowingReads;
@property (strong, nonatomic) NSMapTable *childItemsByParentItem; // @synthesize childItemsByParentItem=_childItemsByParentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HFItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *disableUpdateReasons; // @synthesize disableUpdateReasons=_disableUpdateReasons;
@property (readonly, nonatomic) NAFuture *firstFastUpdateFuture; // @synthesize firstFastUpdateFuture=_firstFastUpdateFuture;
@property (readonly, nonatomic) NAFuture *firstFullUpdateFuture; // @synthesize firstFullUpdateFuture=_firstFullUpdateFuture;
@property (nonatomic) BOOL hasRequestedFirstUpdate; // @synthesize hasRequestedFirstUpdate=_hasRequestedFirstUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSArray *itemProviders; // @synthesize itemProviders=_itemProviders;
@property (strong, nonatomic) HMHome *lastUpdatedHome; // @synthesize lastUpdatedHome=_lastUpdatedHome;
@property (nonatomic) unsigned long long overallLoadingState; // @synthesize overallLoadingState=_overallLoadingState;
@property (strong, nonatomic) id<HFCharacteristicReadPolicy> readPolicy; // @synthesize readPolicy=_readPolicy;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (strong, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *suppressedCharacteristicUpdatesByReason; // @synthesize suppressedCharacteristicUpdatesByReason=_suppressedCharacteristicUpdatesByReason;

+ (BOOL)_canReloadDuringUnitTests;
- (void).cxx_destruct;
- (void)_accessorySettingUpdated:(id)arg1;
- (id)_allDisplayedItemsIncludingInternalItems;
- (id)_allItemsIncludingInternalItems;
- (id)_allSuppressedCharacteristics;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_cameraForCameraControl:(id)arg1;
- (id)_cameraForCameraStream:(id)arg1;
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;
- (id)_debug_itemDescriptions;
- (id)_debug_itemManagerDescription;
- (id)_debug_itemProviderDescriptions;
- (void)_debug_registerForStateDump;
- (id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2;
- (id)_footerTitleForSectionWithIdentifier:(id)arg1;
- (id)_homeFuture;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (id)_internalItems;
- (id)_invalidationReasonsForAddedOrRemovedAccessory:(id)arg1;
- (id)_itemForSorting;
- (id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(BOOL)arg3;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChange:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingChanges:(id)arg1;
- (id)_itemsToUpdateForAccessorySettingsChange:(id)arg1;
- (id)_itemsToUpdateForAllowAccessWhileLockedSettingChange;
- (id)_itemsToUpdateForIncomingInvitation:(id)arg1;
- (id)_itemsToUpdateForMediaSessionChange:(id)arg1;
- (id)_itemsToUpdateForModifiedAccessories:(id)arg1;
- (id)_itemsToUpdateForModifiedActionSets:(id)arg1;
- (id)_itemsToUpdateForModifiedActions:(id)arg1;
- (id)_itemsToUpdateForModifiedCameras:(id)arg1;
- (id)_itemsToUpdateForModifiedCharacteristics:(id)arg1;
- (id)_itemsToUpdateForModifiedEvents:(id)arg1;
- (id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1;
- (id)_itemsToUpdateForModifiedResidentDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedRooms:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceGroups:(id)arg1;
- (id)_itemsToUpdateForModifiedServiceTypes:(id)arg1;
- (id)_itemsToUpdateForModifiedServices:(id)arg1;
- (id)_itemsToUpdateForModifiedSharingDevices:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdateControllers:(id)arg1;
- (id)_itemsToUpdateForModifiedSoftwareUpdates:(id)arg1;
- (id)_itemsToUpdateForModifiedTriggers:(id)arg1;
- (id)_itemsToUpdateForModifiedUsers:(id)arg1;
- (id)_itemsToUpdateForModifiedZones:(id)arg1;
- (id)_itemsToUpdateForOutgoingInvitation:(id)arg1;
- (id)_itemsToUpdateForRemoteAccessChange;
- (id)_itemsWithDependenciesPassingTest:(CDUnknownBlockType)arg1 forItems:(id)arg2;
- (unsigned long long)_loadingStateForItem:(id)arg1;
- (void)_notifyDelegateOfChangesFromDiff:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfItemOperations:(id)arg1 logger:(id)arg2;
- (void)_notifyDelegateOfSectionOperations:(id)arg1 logger:(id)arg2;
- (unsigned long long)_numberOfSections;
- (id)_performUpdateForChildItemsOfItem:(id)arg1 withContext:(id)arg2 isInternal:(BOOL)arg3;
- (id)_performUpdateForItem:(id)arg1 withContext:(id)arg2 isInternal:(BOOL)arg3 isChild:(BOOL)arg4;
- (void)_registerForExternalUpdates;
- (id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg1;
- (id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(BOOL)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5;
- (id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(BOOL)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5 fastInitialUpdatePromise:(id)arg6;
- (void)_removeDelegateNotifications;
- (BOOL)_requiresNotificationsForCharacteristic:(id)arg1;
- (unsigned long long)_sectionForItem:(id)arg1;
- (unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(BOOL)arg2;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2;
- (id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2;
- (void)_setupDelegateNotifications;
- (BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (BOOL)_shouldPerformFastInitialUpdates;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_unregisterForExternalUpdates;
- (void)_updateExternalUpdatesEnabled:(BOOL)arg1 reloadItems:(BOOL)arg2;
- (void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(BOOL)arg2;
- (void)_updateOverallLoadingStateAndNotifyDelegate;
- (void)_updateRepresentationForExternalItemsWithUpdatedOrAddedItems:(id)arg1 logger:(id)arg2;
- (void)_updateRepresentationForInternalItemsWithUpdatedItems:(id)arg1;
- (id)_updateResultsForItems:(id)arg1 context:(id)arg2;
- (id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 context:(id)arg3 allowDelaying:(BOOL)arg4;
- (void)_willUpdateSections;
- (void)accessory:(id)arg1 didAddProfile:(id)arg2;
- (void)accessory:(id)arg1 didRemoveProfile:(id)arg2;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateBundleID:(id)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2;
- (void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2;
- (void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessory:(id)arg1 didUpdateStoreID:(id)arg2;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2;
- (void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3;
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1;
- (void)cameraStream:(id)arg1 didUpdateAudioStreamSettingWithError:(id)arg2;
- (void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (void)cameraStreamControlDidUpdateManagerState:(id)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(id)arg1;
- (id)childItemsForItem:(id)arg1;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2;
- (id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 conformingToProtocol:(id)arg3;
- (void)dealloc;
- (void)disableExternalUpdatesWithReason:(id)arg1;
- (id)displayedItemAtIndexPath:(id)arg1;
- (id)displayedItemsInSection:(unsigned long long)arg1;
- (id)displayedSectionIdentifierForSectionIndex:(unsigned long long)arg1;
- (void)endDisableExternalUpdatesWithReason:(id)arg1;
- (void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(BOOL)arg2;
- (id)footerTitleForSection:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddActionSet:(id)arg2;
- (void)home:(id)arg1 didAddResidentDevice:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3;
- (void)home:(id)arg1 didAddServiceGroup:(id)arg2;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3;
- (void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;
- (void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUnblockAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3;
- (void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(id)arg1 willExecuteActionSets:(id)arg2;
- (void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2;
- (void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidEndBatchNotifications:(id)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (void)homeManagerDidFinishUnknownChange:(id)arg1;
- (void)homeManagerDidUpdateCurrentHome:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(id)arg1;
- (void)homeManagerWillStartBatchNotifications:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)mediaProfile:(id)arg1 didUpdateSettings:(id)arg2;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)notificationSettingsInvalidatedForManager:(id)arg1;
- (unsigned long long)numberOfSections;
- (id)performItemUpdateRequest:(id)arg1;
- (void)recalculateVisibilityAndSortAllItems;
- (id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1;
- (id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2;
- (void)resetItemProviders;
- (void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2;
- (void)residentDevice:(id)arg1 didUpdateName:(id)arg2;
- (void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (unsigned long long)sectionIndexForDisplayedSectionIdentifier:(id)arg1;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2;
- (void)sortDisplayedItemsInSection:(long long)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2;
- (id)titleForSection:(unsigned long long)arg1;
- (id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2;

@end

