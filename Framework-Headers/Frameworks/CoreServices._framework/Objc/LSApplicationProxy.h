//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSBundleProxy.h>

#import <CoreServices/LSDetachable-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class LSApplicationRecord, NSArray, NSDate, NSDictionary, NSNumber, NSProgress, NSSet, NSString, NSUUID, _LSApplicationState, _LSDiskUsage;

@interface LSApplicationProxy : LSBundleProxy <LSDetachable, NSSecureCoding>
{
    NSString *_deviceIdentifierVendorName;
    LSApplicationRecord *_record;
    NSArray *_plugInKitPlugins;
    BOOL _userInitiatedUninstall;
}

@property (readonly, nonatomic) NSNumber *ODRDiskUsage;
@property (readonly, nonatomic) NSArray *UIBackgroundModes; // @dynamic UIBackgroundModes;
@property (readonly, nonatomic) NSArray *VPNPlugins; // @dynamic VPNPlugins;
@property (readonly, nonatomic) NSArray *activityTypes;
@property (readonly, nonatomic, getter=isAdHocCodeSigned) BOOL adHocCodeSigned; // @dynamic adHocCodeSigned;
@property (readonly, nonatomic) NSString *appIDPrefix;
@property (readonly, nonatomic) _LSApplicationState *appState;
@property (readonly, nonatomic) NSString *appStoreToolsBuildVersion; // @dynamic appStoreToolsBuildVersion;
@property (readonly, nonatomic, getter=isAppStoreVendable) BOOL appStoreVendable; // @dynamic appStoreVendable;
@property (readonly, nonatomic) NSArray *appTags; // @dynamic appTags;
@property (readonly, nonatomic, getter=isAppUpdate) BOOL appUpdate;
@property (readonly, nonatomic) NSString *applicationDSID;
@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *applicationType;
@property (readonly, nonatomic) NSString *applicationVariant;
@property (readonly, nonatomic, getter=isArcadeApp) BOOL arcadeApp; // @dynamic arcadeApp;
@property (readonly, nonatomic) NSArray *audioComponents; // @dynamic audioComponents;
@property (readonly, nonatomic) NSArray *backgroundTaskSchedulerPermittedIdentifiers; // @dynamic backgroundTaskSchedulerPermittedIdentifiers;
@property (readonly, nonatomic, getter=isBetaApp) BOOL betaApp;
@property (readonly, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (readonly, nonatomic) int bundleModTime;
@property (readonly, nonatomic) BOOL canHandleWebAuthentication; // @dynamic canHandleWebAuthentication;
@property (readonly, nonatomic) NSArray *carPlayInstrumentClusterURLSchemes; // @dynamic carPlayInstrumentClusterURLSchemes;
@property (readonly, nonatomic) NSSet *claimedDocumentContentTypes;
@property (readonly, nonatomic) NSSet *claimedURLSchemes;
@property (readonly, nonatomic) NSString *companionApplicationIdentifier;
@property (readonly, nonatomic) NSString *complicationPrincipalClass;
@property (readonly, nonatomic) LSApplicationRecord *correspondingApplicationRecord;
@property (readonly, nonatomic) NSArray *counterpartIdentifiers; // @dynamic counterpartIdentifiers;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable; // @dynamic deletable;
@property (readonly, nonatomic, getter=isDeviceBasedVPP) BOOL deviceBasedVPP;
@property (readonly, nonatomic) NSArray *deviceFamily;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForAdvertising; // @dynamic deviceIdentifierForAdvertising;
@property (readonly, nonatomic) NSUUID *deviceIdentifierForVendor; // @dynamic deviceIdentifierForVendor;
@property (readonly, nonatomic) long long deviceManagementPolicy;
@property (readonly, nonatomic) NSArray *directionsModes; // @dynamic directionsModes;
@property (readonly, nonatomic) _LSDiskUsage *diskUsage; // @dynamic diskUsage;
@property (readonly, nonatomic) NSNumber *downloaderDSID;
@property (readonly, nonatomic) NSNumber *dynamicDiskUsage;
@property (readonly, nonatomic) NSArray *externalAccessoryProtocols; // @dynamic externalAccessoryProtocols;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSNumber *familyID;
@property (readonly, nonatomic) BOOL fileSharingEnabled;
@property (readonly, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (readonly, nonatomic) BOOL gameCenterEverEnabled;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *genreID;
@property (readonly, nonatomic) BOOL hasComplication; // @dynamic hasComplication;
@property (readonly, nonatomic) BOOL hasCustomNotification; // @dynamic hasCustomNotification;
@property (readonly, nonatomic) BOOL hasGlance; // @dynamic hasGlance;
@property (readonly, nonatomic) BOOL hasMIDBasedSINF;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder; // @dynamic hasParallelPlaceholder;
@property (readonly, nonatomic) BOOL hasSettingsBundle; // @dynamic hasSettingsBundle;
@property (readonly, nonatomic) BOOL iconIsPrerendered;
@property (readonly, nonatomic) BOOL iconUsesAssetCatalog;
@property (readonly, nonatomic) NSNumber *installFailureReason;
@property (readonly, nonatomic) NSProgress *installProgress;
@property (readonly, nonatomic) unsigned long long installType;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) NSNumber *itemID;
@property (readonly, nonatomic) NSString *itemName;
@property (readonly, nonatomic, getter=isLaunchProhibited) BOOL launchProhibited; // @dynamic launchProhibited;
@property (readonly, nonatomic) NSArray *managedPersonas;
@property (readonly, nonatomic) NSString *maximumSystemVersion; // @dynamic maximumSystemVersion;
@property (readonly, nonatomic) NSString *minimumSystemVersion; // @dynamic minimumSystemVersion;
@property (readonly, nonatomic) BOOL missingRequiredSINF;
@property (readonly, nonatomic, getter=isNewsstandApp) BOOL newsstandApp;
@property (readonly, nonatomic) unsigned long long originalInstallType;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSArray *plugInKitPlugins;
@property (readonly, nonatomic) NSString *preferredArchitecture;
@property (readonly, nonatomic, getter=isPurchasedReDownload) BOOL purchasedReDownload;
@property (readonly, nonatomic) NSNumber *purchaserDSID;
@property (readonly, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) NSNumber *ratingRank;
@property (readonly, nonatomic) NSDate *registeredDate;
@property (readonly, nonatomic, getter=isRemoveableSystemApp) BOOL removeableSystemApp;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;
@property (readonly, nonatomic) NSArray *requiredDeviceCapabilities;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic) BOOL runsIndependentlyOfCompanionApp; // @dynamic runsIndependentlyOfCompanionApp;
@property (readonly, nonatomic) NSString *shortVersionString; // @dynamic shortVersionString;
@property (readonly, nonatomic) BOOL shouldSkipWatchAppInstall; // @dynamic shouldSkipWatchAppInstall;
@property (readonly, nonatomic) NSDictionary *siriActionDefinitionURLs;
@property (readonly, nonatomic) NSString *sourceAppIdentifier;
@property (readonly, nonatomic, getter=isStandaloneWatchApp) BOOL standaloneWatchApp;
@property (readonly, nonatomic) NSNumber *staticDiskUsage;
@property (readonly, nonatomic) NSArray *staticShortcutItems; // @dynamic staticShortcutItems;
@property (readonly, nonatomic) NSString *storeCohortMetadata;
@property (readonly, nonatomic) NSNumber *storeFront;
@property (readonly, nonatomic) NSArray *subgenres;
@property (readonly, nonatomic) NSArray *supportedComplicationFamilies; // @dynamic supportedComplicationFamilies;
@property (readonly, nonatomic) BOOL supportsAlternateIconNames; // @dynamic supportsAlternateIconNames;
@property (readonly, nonatomic) BOOL supportsAudiobooks; // @dynamic supportsAudiobooks;
@property (readonly, nonatomic) BOOL supportsExternallyPlayableContent; // @dynamic supportsExternallyPlayableContent;
@property (readonly, nonatomic) BOOL supportsMultiwindow; // @dynamic supportsMultiwindow;
@property (readonly, nonatomic) BOOL supportsODR;
@property (readonly, nonatomic) BOOL supportsOpenInPlace; // @dynamic supportsOpenInPlace;
@property (readonly, nonatomic) BOOL supportsPurgeableLocalStorage; // @dynamic supportsPurgeableLocalStorage;
@property (readonly, nonatomic) NSString *teamID;
@property (nonatomic) BOOL userInitiatedUninstall; // @synthesize userInitiatedUninstall=_userInitiatedUninstall;
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic, getter=isWatchKitApp) BOOL watchKitApp;
@property (readonly, nonatomic) NSString *watchKitVersion; // @dynamic watchKitVersion;
@property (readonly, nonatomic, getter=isWhitelisted) BOOL whitelisted;

+ (id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(BOOL)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned int *)arg6;
+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyForSystemPlaceholder:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1 withContext:(struct LSContext *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)UPPValidated;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext *)arg2 bundleIdentifier:(id)arg3;
- (id)_initWithContext:(struct LSContext *)arg1 bundleUnit:(unsigned int)arg2 applicationRecord:(id)arg3 bundleID:(id)arg4 resolveAndDetach:(BOOL)arg5;
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2;
- (id)_managedPersonas;
- (BOOL)_usesSystemPersona;
- (id)alternateIconName;
- (id)bundleType;
- (void)clearAdvertisingIdentifier;
- (id)dataContainerURL;
- (id)description;
- (void)detach;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentVariables;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)freeProfileValidated;
- (id)getBundleMetadata;
- (void)getDeviceManagementPolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)getGenericTranslocationTargetURL:(id *)arg1 error:(id *)arg2;
- (id)groupContainerURLs;
- (id)handlerRankOfClaimForContentType:(id)arg1;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)installProgressSync;
- (BOOL)isDeletableIgnoringRestrictions;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(BOOL)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)primaryIconDataForVariant:(int)arg1;
- (BOOL)profileValidated;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setAlternateIconName:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

