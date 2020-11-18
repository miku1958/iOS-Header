//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFReachability : NSObject
{
    BOOL _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability *_reachabilityRef;
}

@property (nonatomic) BOOL alwaysReturnLocalWiFiStatus; // @synthesize alwaysReturnLocalWiFiStatus=_alwaysReturnLocalWiFiStatus;
@property (nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (BOOL)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end

