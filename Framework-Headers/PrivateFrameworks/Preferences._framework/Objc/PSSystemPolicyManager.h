//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PSSystemPolicyManager : NSObject
{
}

+ (BOOL)_backgroundAppRefreshSettingsNeededForProxy:(id)arg1;
+ (BOOL)_cellularDataSettingsNeededForBundleID:(id)arg1;
+ (id)_dataUsageWorkspaceInfo;
+ (BOOL)_documentSettingsNeededForBundleID:(id)arg1;
+ (BOOL)_locationSettingsNeededForBundleID:(id)arg1;
+ (BOOL)_notificationSettingsNeededForBundleID:(id)arg1;
+ (void)_populateBBSectionIDs;
+ (BOOL)_privacySettingsNeededForProxy:(id)arg1;
+ (BOOL)_shouldIncludeProxy:(id)arg1;
+ (BOOL)_systemSettingsNeededForProxy:(id)arg1;
+ (id)_thirdPartyApplicationProxies;
+ (id)_thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplicationForBundleID:(id)arg1;
+ (id)thirdPartyApplicationProxies;
+ (id)thirdPartyApplicationProxyForBundleID:(id)arg1;
+ (id)thirdPartyApplications;

@end

