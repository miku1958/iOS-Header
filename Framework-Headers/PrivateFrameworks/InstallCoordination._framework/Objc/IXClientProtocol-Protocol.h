//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXAppInstallCoordinatorSeed, IXPlaceholderAttributes, IXPlaceholderSeed, IXPromisedInMemoryDataSeed, IXPromisedInMemoryDictionarySeed, IXPromisedOutOfBandStreamingZipTransferSeed, IXPromisedOutOfBandTransferSeed, IXPromisedStreamingZipTransferSeed, IXPromisedTransferToPathSeed, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL, NSUUID, NSXPCListenerEndpoint;

@protocol IXClientProtocol <NSObject>
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 appAssetPromiseHasBegunFulfillment:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 cancelForReason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 fireObserversWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getAppAssetPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getAppAssetPromiseDRI:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getCoordinationState:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getErrorInfo:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getInitialODRAssetPromises:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getIsComplete:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getIsPausedWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getPlaceholderPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getPreparationPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getUserDataPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 getUserDataRestoreShouldBegin:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasAppAssetPromise:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasAutoEnabledExtensionTypes:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasInitialODRAssetPromises:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasInstallOptions:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasPlaceholderPromise:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 hasUserDataPromise:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 isUserInitiated:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 prioritizeWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setAppAssetPromiseDRI:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setAppAssetPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setAutoEnabledExtensionTypes:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setInitialODRAssetPromiseUUIDs:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setInstallOptionsPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setIsPaused:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setPlaceholderPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setPreparationPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setUserDataPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSCoordinatedAppInstall:(NSUUID *)arg1 setUserInitiated:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 cancelForReason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getErrorInfo:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getIsComplete:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 getPercentComplete:(void (^)(double, NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 preflightWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 resetWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 setIsComplete:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSDataPromise:(NSUUID *)arg1 setPercentComplete:(double)arg2;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 getStagedPath:(void (^)(NSURL *, NSError *))arg2;
- (oneway void)_remote_IXSOwnedDataPromise:(NSUUID *)arg1 setStagedPath:(NSURL *)arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getAttributesWithCompletion:(void (^)(IXPlaceholderAttributes *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getEntitlementsPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getIconPromise:(void (^)(IXDataPromiseSeed *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getLaunchProhibitedWithCompletion:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getLocalizationDictionary:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getMetadataWithCompletion:(void (^)(MIStoreMetadata *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getPlugInPlaceholderPromises:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 getSinfDataWithCompletion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasEntitlementsPromise:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasIconPromise:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 hasPlugInPlaceholderPromises:(void (^)(BOOL, NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setAttributes:(IXPlaceholderAttributes *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setConfigurationCompleteWithCompletion:(void (^)(NSError *))arg2;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setEntitlementsPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setIconPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setLaunchProhibited:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setLocalizationPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setMetadataPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setPlugInPlaceholderPromiseUUIDs:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPlaceholder:(NSUUID *)arg1 setSinfPromiseUUID:(NSUUID *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPromisedOutOfBandStreamingZipTransfer:(NSUUID *)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(NSUUID *)arg1 consumeExtractedBytesAtPath:(NSURL *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)_remote_IXSPromisedStreamingZipTransfer:(NSUUID *)arg1 setArchiveBytesConsumed:(unsigned long long)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setShouldCopy:(BOOL)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setTransferPath:(NSURL *)arg2;
- (oneway void)_remote_IXSPromisedTransferToPath:(NSUUID *)arg1 setTryDeltaCopy:(BOOL)arg2;
- (void)_remote_addObserversForCoordinatorsWithUUIDs:(NSSet *)arg1 fireObserverMethods:(BOOL)arg2;
- (void)_remote_addObserversForDataPromisesWithUUIDs:(NSSet *)arg1;
- (void)_remote_cancelCoordinatorForAppWithBundleID:(NSString *)arg1 reason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_cancelCoordinatorsForAppsWithBundleIDs:(NSArray *)arg1 reason:(NSError *)arg2 client:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)_remote_createAppInstallCoordinatorWithSeed:(IXAppInstallCoordinatorSeed *)arg1 createIfNotExisting:(BOOL)arg2 completion:(void (^)(IXAppInstallCoordinatorSeed *, BOOL, NSError *))arg3;
- (void)_remote_createInMemoryDataPromiseWithSeed:(IXPromisedInMemoryDataSeed *)arg1 data:(NSData *)arg2 completion:(void (^)(IXPromisedInMemoryDataSeed *, NSError *))arg3;
- (void)_remote_createInMemoryDictionaryPromiseWithSeed:(IXPromisedInMemoryDictionarySeed *)arg1 dictionary:(NSDictionary *)arg2 completion:(void (^)(IXPromisedInMemoryDictionarySeed *, NSError *))arg3;
- (void)_remote_createOutOfBandStreamingZipTransferDataPromiseWithSeed:(IXPromisedOutOfBandStreamingZipTransferSeed *)arg1 completion:(void (^)(IXPromisedOutOfBandStreamingZipTransferSeed *, NSError *))arg2;
- (void)_remote_createOutOfBandTransferPromiseWithSeed:(IXPromisedOutOfBandTransferSeed *)arg1 completion:(void (^)(IXPromisedOutOfBandTransferSeed *, NSError *))arg2;
- (void)_remote_createPlaceholderDataPromiseWithSeed:(IXPlaceholderSeed *)arg1 completion:(void (^)(IXPlaceholderSeed *, NSError *))arg2;
- (void)_remote_createStreamingZipTransferDataPromiseWithSeed:(IXPromisedStreamingZipTransferSeed *)arg1 completion:(void (^)(IXPromisedStreamingZipTransferSeed *, NSError *))arg2;
- (void)_remote_createTransferToPathDataPromiseWithSeed:(IXPromisedTransferToPathSeed *)arg1 completion:(void (^)(IXPromisedTransferToPathSeed *, NSError *))arg2;
- (void)_remote_displayUserPresentableErrorForApp:(NSString *)arg1 code:(long long)arg2;
- (void)_remote_displayUserPresentableErrorForApps:(NSArray *)arg1 code:(long long)arg2;
- (void)_remote_fetchRegisteredDataPromiseInfoForCreator:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)_remote_fetchSeedsForCoordinatorsWithIntent:(unsigned long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)_remote_killDaemonForTestingWithCompletion:(void (^)(NSError *))arg1;
- (void)_remote_pingDaemonWithCompletion:(void (^)(int, NSError *))arg1;
- (void)_remote_prioritizeCoordinatorForAppWithBundleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)_remote_purgeRegisteredCoordinatorsAndPromisesForCreator:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)_remote_registerObserverMachServiceName:(NSString *)arg1 forClientIdentifiers:(NSSet *)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_registerTransientObserver:(NSXPCListenerEndpoint *)arg1 forClientIdentifiers:(NSSet *)arg2 respondingToSelectors:(unsigned long long)arg3;
- (void)_remote_removabilityForAppWithBundleID:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)_remote_removeObserverForCoordinatorWithUUID:(NSUUID *)arg1;
- (void)_remote_removeObserverForDataPromiseWithUUID:(NSUUID *)arg1;
- (void)_remote_setIsPaused:(BOOL)arg1 forCoordinatorForAppWithBundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)_remote_setRemovability:(unsigned long long)arg1 forAppWithBundleID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)_remote_setTestModeForIdentifierPrefix:(NSString *)arg1 testMode:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)_remote_setTestingEnabled:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (void)_remote_uninstallAppWithBundleID:(NSString *)arg1 requestUserConfirmation:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
@end

