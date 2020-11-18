//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol IMReachabilityDelegate, OS_dispatch_queue;

@interface IMReachability : NSObject
{
    BOOL _gettingFlags;
    id<IMReachabilityDelegate> _delegate;
    unsigned long long _flags;
    NSString *_description;
    void *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property (readonly, nonatomic) BOOL connectionRequired;
@property (weak, nonatomic) id<IMReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property (nonatomic) BOOL gettingFlags; // @synthesize gettingFlags=_gettingFlags;
@property (strong, nonatomic) NSString *reachabilityDescription; // @synthesize reachabilityDescription=_description;
@property (nonatomic) void *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;

+ (id)reachabilityWithHostName:(id)arg1;
+ (id)reachabilityWithLocalAddress:(id)arg1 remoteAddress:(id)arg2;
+ (id)reachabilityWithRemoteAddress:(id)arg1;
- (void).cxx_destruct;
- (void)_forceGetFlagsIfNecessary;
- (void)_handleCallbackForSCNetworkReachability:(struct __SCNetworkReachability *)arg1;
- (id)_initWithReachabilityRef:(struct __SCNetworkReachability *)arg1 description:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 delegate:(id)arg3;
- (id)initWithRemoteHost:(id)arg1 delegate:(id)arg2;

@end

