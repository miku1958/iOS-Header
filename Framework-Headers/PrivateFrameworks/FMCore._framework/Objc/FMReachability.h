//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMReachability : NSObject
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (BOOL)connectionRequired;
- (unsigned long long)currentReachabilityStatus;
- (void)dealloc;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (unsigned long long)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end

