//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject
{
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableDictionary *_dataSharingStore;
    NSMutableArray *_appBundlesWithSeparateData;
}

@property (readonly, nonatomic) NSURL *oAuthDataContainerURL;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_addDataSharingOAuthDomainWithAppBundleID:(id)arg1 domain:(id)arg2 allowShare:(BOOL)arg3;
- (void)_checkInAppBundleIDIfNeeded:(id)arg1;
- (void)_fetchMatchedCookiesForURL:(id)arg1 inStore:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)_loadSharingModePlistWithBundleID:(id)arg1;
- (id)_oAuthWebsiteDataStore;
- (id)_policyFileURLWithBundleID:(id)arg1;
- (void)_saveDataSharingDictionary:(id)arg1 appBundleID:(id)arg2;
- (void)clearAllWebsitesData;
- (void)fetchCookiesForURL:(id)arg1 appBundleID:(id)arg2 webView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getDataSharingModeWithAppBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)importSafariWebsiteDataWithURL:(id)arg1 appBundleID:(id)arg2 webView:(id)arg3 notification:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;
- (void)setDataSharingModeWithAppBundleID:(id)arg1 mode:(long long)arg2;
- (id)systemDataContainerURLWithAppBundleID:(id)arg1;
- (id)websiteDataStoreConfigurationWithRootURL:(id)arg1;

@end

