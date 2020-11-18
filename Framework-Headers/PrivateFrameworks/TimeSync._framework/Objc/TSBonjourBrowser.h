//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;

@interface TSBonjourBrowser : NSObject
{
    struct _DNSServiceRef_t *_sdRef;
    NSObject<OS_dispatch_queue> *_queue;
    id<TSBonjourBrowserDelegate> _delegate;
    NSArray *_nodes;
}

@property (nonatomic) id<TSBonjourBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;

- (void).cxx_destruct;
- (void)addedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (void)dealloc;
- (id)init;
- (void)removedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (BOOL)startBrowsingWithError:(id *)arg1;
- (BOOL)stopBrowsing;

@end
