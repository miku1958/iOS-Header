//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HLPReachability, NSString;
@protocol HLPReachabilityManagerDelegate;

@interface HLPReachabilityManager : NSObject
{
    BOOL _notifying;
    BOOL _hostActive;
    BOOL _reachabilityInitialized;
    BOOL _connected;
    BOOL _internetActive;
    id<HLPReachabilityManagerDelegate> _delegate;
    HLPReachability *_internetReachability;
    HLPReachability *_hostReachability;
    NSString *_hostName;
}

@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (weak, nonatomic) id<HLPReachabilityManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property (strong, nonatomic) HLPReachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property (nonatomic) BOOL internetActive; // @synthesize internetActive=_internetActive;
@property (strong, nonatomic) HLPReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property (nonatomic) BOOL reachabilityInitialized; // @synthesize reachabilityInitialized=_reachabilityInitialized;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)isNetworkError:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)startNotifier;
- (void)stopNotifier;

@end
