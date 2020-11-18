//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSafeBrowsing/MCProfileConnectionObserver-Protocol.h>

@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver>
{
    struct shared_ptr<SafeBrowsing::LookupContext> _lookupContext;
    unsigned int _observerToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedLookupContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deleteAllDatabasesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchCellularDataPlanWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceDatabaseUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getDatabaseStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getServiceStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setSafeBrowsingEnabledStateNeedsUpdate;
- (void)dealloc;
- (id)init;
- (void)lookUpURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end

