//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIAppLibraryInterface-Protocol.h>

@class NSArray, WLKUIAppInstallerViewController;

@interface WLKUIAppLibraryInterface : IKJSObject <WLKUIAppLibraryInterface>
{
    WLKUIAppInstallerViewController *_installerViewController;
}

@property (readonly, nonatomic) NSArray *installed;
@property (readonly, nonatomic) NSArray *subscribed;
@property (readonly, nonatomic) NSArray *test;

+ (BOOL)_appInstallationAllowed;
- (void).cxx_destruct;
- (id)_appDictionariesForProxies:(id)arg1;
- (id)_appDictionaryForProxy:(id)arg1;
- (void)_configureAppInstallerViewController:(id)arg1 withOptions:(id)arg2;
- (id)_rootViewController;
- (void)installAppForChannel:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (BOOL)isAppInstalled:(id)arg1;
- (BOOL)isShowingInstaller;
- (void)presentPurchase:(id)arg1;

@end

