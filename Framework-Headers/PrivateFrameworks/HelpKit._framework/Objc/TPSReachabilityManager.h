//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TPSReachability;

@interface TPSReachabilityManager : NSObject
{
    BOOL _notifying;
    BOOL _hostActive;
    BOOL _reachabilityInitialized;
    BOOL _connected;
    BOOL _internetActive;
    NSString *_hostName;
    TPSReachability *_internetReachability;
    TPSReachability *_hostReachability;
}

@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (strong, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property (strong, nonatomic) TPSReachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property (nonatomic) BOOL internetActive; // @synthesize internetActive=_internetActive;
@property (strong, nonatomic) TPSReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property (nonatomic) BOOL reachabilityInitialized; // @synthesize reachabilityInitialized=_reachabilityInitialized;

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)isNetworkError:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)startNotifier;
- (void)stopNotifier;
- (void)updateStatus:(id)arg1;

@end
