//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OFReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    BOOL _localWiFiRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (long long)_localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)_networkStatusForFlags:(unsigned int)arg1;
- (BOOL)connectionRequired;
- (long long)currentNetworkStatus;
- (void)dealloc;
- (id)init;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end

