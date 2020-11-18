//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCURLListenerListController.h>

#import <ManagedConfigurationUI/UITableViewDelegate-Protocol.h>

@class MCProfileInfo, NSArray, NSMutableArray, NSSManager, NSString, UIImage;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate>
{
    BOOL _hasFetchedProfilesInfo;
    BOOL _hasFailedFetchingProfilesInfo;
    int _provisioningProfileInstalledToken;
    int _provisioningProfileRemovedToken;
    NSMutableArray *_profileInfo;
    UIImage *_profileListIcon;
    NSSManager *_nssManager;
    MCProfileInfo *_mdmProfileInfo;
    NSArray *_configurationProfilesInfoList;
    NSArray *_enterpriseAppSigners;
    NSArray *_developerAppSigners;
    NSArray *_blockedApplications;
}

@property (strong, nonatomic) NSArray *blockedApplications; // @synthesize blockedApplications=_blockedApplications;
@property (strong, nonatomic) NSArray *configurationProfilesInfoList; // @synthesize configurationProfilesInfoList=_configurationProfilesInfoList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *developerAppSigners; // @synthesize developerAppSigners=_developerAppSigners;
@property (strong, nonatomic) NSArray *enterpriseAppSigners; // @synthesize enterpriseAppSigners=_enterpriseAppSigners;
@property (nonatomic) BOOL hasFailedFetchingProfilesInfo; // @synthesize hasFailedFetchingProfilesInfo=_hasFailedFetchingProfilesInfo;
@property (nonatomic) BOOL hasFetchedProfilesInfo; // @synthesize hasFetchedProfilesInfo=_hasFetchedProfilesInfo;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MCProfileInfo *mdmProfileInfo; // @synthesize mdmProfileInfo=_mdmProfileInfo;
@property (strong, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property (strong, nonatomic) NSMutableArray *profileInfo; // @synthesize profileInfo=_profileInfo;
@property (strong, nonatomic) UIImage *profileListIcon; // @synthesize profileListIcon=_profileListIcon;
@property (nonatomic) int provisioningProfileInstalledToken; // @synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken;
@property (nonatomic) int provisioningProfileRemovedToken; // @synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken;
@property (readonly) Class superclass;

+ (id)specifiersForBlockedApps:(id)arg1;
- (void).cxx_destruct;
- (void)_appSignerApplicationsChanged:(id)arg1;
- (void)_blockedAppsChanged:(id)arg1;
- (void)_hideProgressIndicatorAndShowBackButton:(BOOL)arg1;
- (void)_installedApplicationsChanged:(id)arg1;
- (void)_profileListChanged:(id)arg1;
- (void)_showProgressIndicator;
- (void)dealloc;
- (void)fetchRemoteProfileList;
- (void)handleProfilesInfoResponse:(id)arg1 error:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)specifiers;
- (id)specifiersForMDMProfileInfo:(id)arg1 configurationProfilesInfo:(id)arg2 enterpriseAppSigners:(id)arg3 developerAppSigners:(id)arg4 blockedApps:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;

@end

