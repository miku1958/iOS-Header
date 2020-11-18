//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUNetworkReachability : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct __SCNetworkReachability *_reachabilityRef;
    long long _enableCount;
    NSString *_hostName;
    long long _cachedStatus;
    BOOL _notifierActive;
    CDUnknownBlockType _reachabilityUpdatedBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

@property (copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property (readonly, nonatomic) long long lastKnownStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property (nonatomic) BOOL notifierActive; // @synthesize notifierActive=_notifierActive;
@property (copy, nonatomic) CDUnknownBlockType reachabilityUpdatedBlock; // @synthesize reachabilityUpdatedBlock=_reachabilityUpdatedBlock;

+ (id)internetReachabilityStatusQueue;
+ (void)internetReachabilityStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityForInternetConnection;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)networkReachabilityWithHostName:(id)arg1;
+ (id)networkReachabilityWithNetworkReachabilityRef:(struct __SCNetworkReachability *)arg1 hostNameOrNil:(id)arg2;
+ (long long)networkStatusForFlags:(unsigned int)arg1;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefForInternetConnection;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithAddress:(const struct sockaddr_in *)arg1;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithHostName:(const char *)arg1;
+ (id)p_stringForNetworkReachabilityFlags:(unsigned int)arg1;
+ (id)p_stringForNetworkReachabilityStatus:(long long)arg1;
+ (BOOL)synchronousHostLookup:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disableNotifier;
- (void)enableNotifier;
- (struct sockaddr_in)hostAddress;
- (id)init;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)p_startNotifier;
- (void)p_stopNotifier;
- (void)p_updateCachedStatus:(long long)arg1;
- (long long)statusFromFlags:(unsigned int)arg1;
- (void)updateCachedStatus:(long long)arg1;

@end
