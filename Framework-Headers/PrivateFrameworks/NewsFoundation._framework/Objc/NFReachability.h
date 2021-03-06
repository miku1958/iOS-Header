//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_nw_path, OS_nw_path_monitor;

@interface NFReachability : NSObject
{
    long long _currentReachabilityStatus;
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSObject<OS_nw_path_monitor> *_networkPathMonitor;
    NSObject<OS_nw_path> *_currentNetworkPath;
}

@property (strong, nonatomic) NSObject<OS_nw_path> *currentNetworkPath; // @synthesize currentNetworkPath=_currentNetworkPath;
@property long long currentReachabilityStatus; // @synthesize currentReachabilityStatus=_currentReachabilityStatus;
@property (strong, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor; // @synthesize networkPathMonitor=_networkPathMonitor;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *observationQueue; // @synthesize observationQueue=_observationQueue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)_statusFromNetworkPath:(id)arg1;
- (void)_updateCurrentNetworkPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

