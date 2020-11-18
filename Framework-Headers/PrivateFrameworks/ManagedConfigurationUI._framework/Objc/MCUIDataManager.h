//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class LSApplicationWorkspace, MCProfileInfo, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface MCUIDataManager : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    int _appsChangedNotifyToken;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    MCProfileInfo *_mdmProfile;
    NSArray *_configurationProfiles;
    NSArray *_freeDeveloperAppSigners;
    NSArray *_enterpriseAppSigners;
    NSArray *_blockedApplications;
    LSApplicationWorkspace *_appWorkspace;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property (strong, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property (nonatomic) int appsChangedNotifyToken; // @synthesize appsChangedNotifyToken=_appsChangedNotifyToken;
@property (strong, nonatomic) NSArray *blockedApplications; // @synthesize blockedApplications=_blockedApplications;
@property (strong, nonatomic) NSArray *configurationProfiles; // @synthesize configurationProfiles=_configurationProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *enterpriseAppSigners; // @synthesize enterpriseAppSigners=_enterpriseAppSigners;
@property (strong, nonatomic) NSArray *freeDeveloperAppSigners; // @synthesize freeDeveloperAppSigners=_freeDeveloperAppSigners;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MCProfileInfo *mdmProfile; // @synthesize mdmProfile=_mdmProfile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property (nonatomic) int provisioningProfileInstalledToken; // @synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken; // @synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // @synthesize reloadQueue=_reloadQueue;
@property (readonly) Class superclass;

+ (BOOL)isProfileSectionRestricted;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_reloadQueueReloadDataInBackgroundIncludingProfiles:(BOOL)arg1 appSigners:(BOOL)arg2 blockedApplications:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)appSignerCount;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)configurationProfilesChanged:(id)arg1;
- (id)configurationProfilesWithOutMDMProfile:(id *)arg1 outEnterpriseAppSigners:(id *)arg2 outFreeDevAppSigners:(id *)arg3 outBlockedApplications:(id *)arg4;
- (void)dealloc;
- (id)init;
- (BOOL)isProfileSectionEmpty;
- (unsigned long long)itemCount;
- (unsigned long long)profileCount;
- (void)reloadAllDataInBackground;
- (void)reloadAllDataInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadAppSignersAndBlockedAppsInBackground;
- (void)reloadAppSignersAndBlockedAppsInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadDataInBackgroundIncludingProfiles:(BOOL)arg1 appSigners:(BOOL)arg2 blockedApplications:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadProfilesInBackground;
- (void)reloadProfilesInBackgroundWithCompletion:(CDUnknownBlockType)arg1;

@end

