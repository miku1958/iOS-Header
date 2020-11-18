//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, VSAccountStore, VSIdentityProvider, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSIdentityProviderInfoCenter : NSObject
{
    VSPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_privateQueue;
    VSAccountStore *_accountStore;
    VSIdentityProvider *_cachedIdentityProvider;
    NSString *_cachedDesignatedAppBundleIdentifier;
}

@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (strong, nonatomic) NSString *cachedDesignatedAppBundleIdentifier; // @synthesize cachedDesignatedAppBundleIdentifier=_cachedDesignatedAppBundleIdentifier;
@property (strong, nonatomic) VSIdentityProvider *cachedIdentityProvider; // @synthesize cachedIdentityProvider=_cachedIdentityProvider;
@property (strong, nonatomic) VSPreferences *preferences; // @synthesize preferences=_preferences;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (void)_updateCachedBundleInfoWithAdamID:(id)arg1;
- (id)_value:(id)arg1 withDefault:(id)arg2;
- (void)dealloc;
- (void)enqueueInfoQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

