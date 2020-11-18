//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCUITableViewController.h>

@class MCUIAppSigner, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MCAppSignerViewController : MCUITableViewController
{
    BOOL _isNetworkReachable;
    MCUIAppSigner *_appSigner;
    NSObject<OS_dispatch_group> *_trustActionGroup;
}

@property (strong, nonatomic) MCUIAppSigner *appSigner; // @synthesize appSigner=_appSigner;
@property (nonatomic) BOOL isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup; // @synthesize trustActionGroup=_trustActionGroup;

- (void).cxx_destruct;
- (BOOL)_isAppRemovalAllowed;
- (BOOL)_isEnterpriseAppTrustAllowed;
- (BOOL)_isShowingTrustUntrustRowAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentNetworkRequiredAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)_setup;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)arg1;
- (void)appSignerApplicationsChanged:(id)arg1;
- (void)dealloc;
- (void)effectiveSettingsChanged:(id)arg1;
- (id)initWithAppSigner:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)networkReachabilityChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshAppSigner;
- (void)removeAppSignerApps;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)trustAppSigner;
- (void)verifyApps;

@end
