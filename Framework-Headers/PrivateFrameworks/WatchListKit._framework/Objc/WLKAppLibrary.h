//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultAppLibrary;
- (void).cxx_destruct;
- (id)_bundleIdentifiersfromProxies:(id)arg1;
- (void)_handleInvalidationWithReason:(id)arg1;
- (id)_refreshAppLibrary;
- (void)_subscriptionsDidChangeNotification:(id)arg1;
- (id)allAppBundleIdentifiers;
- (id)allAppProxies;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)beginIgnoringAppLibraryChanges;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)endIgnoringAppLibraryChanges;
- (id)init;
- (id)installedAppBundleIdentifiers;
- (id)installedAppProxies;
- (BOOL)isTVAppInstalled;
- (id)localizedNameForBundle:(id)arg1;
- (id)refresh;
- (id)subscribedAppBundleIdentifiers;
- (id)subscribedAppProxies;
- (id)subscriptionInfoForBundle:(id)arg1;
- (id)testAppBundleIdentifiers;
- (id)testAppProxies;

@end
