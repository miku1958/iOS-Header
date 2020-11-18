//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDApplicationInfo, NSHashTable;
@protocol OS_dispatch_queue;

@interface HMDProcessInfo : NSObject
{
    BOOL _viewService;
    int _pid;
    unsigned long long _state;
    HMDApplicationInfo *_appInfo;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSHashTable *_connectionProxies;
}

@property (readonly, weak, nonatomic) HMDApplicationInfo *appInfo; // @synthesize appInfo=_appInfo;
@property (readonly, nonatomic, getter=isBackgrounded) BOOL background;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, nonatomic) NSHashTable *connectionProxies; // @synthesize connectionProxies=_connectionProxies;
@property (readonly, nonatomic, getter=isForegrounded) BOOL foreground;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic) unsigned long long proxyCount;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic, getter=isTerminated) BOOL terminated;
@property (readonly, nonatomic, getter=isViewService) BOOL viewService; // @synthesize viewService=_viewService;

- (void).cxx_destruct;
- (void)activate;
- (id)activeRequestIdentifiers;
- (void)addConnectionProxy:(id)arg1;
- (void)deactivate;
- (id)description;
- (id)init;
- (id)initWithConnectionProxy:(id)arg1 application:(id)arg2 processId:(int)arg3;
- (void)initiateRefresh;
- (void)removeConnectionProxy:(id)arg1;

@end

