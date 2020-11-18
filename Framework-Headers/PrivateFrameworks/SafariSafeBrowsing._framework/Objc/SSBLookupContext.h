//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SSBLookupContext : NSObject
{
    struct shared_ptr<SafeBrowsing::LookupContext> _lookupContext;
    unsigned int _observerToken;
}

+ (id)sharedLookupContext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deleteAllDatabasesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceDatabaseUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getDatabaseStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getLastDatabaseUpdateTimeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getServiceStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)lookUpURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
