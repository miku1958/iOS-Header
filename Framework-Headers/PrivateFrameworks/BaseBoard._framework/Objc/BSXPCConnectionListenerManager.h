//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BSXPCConnectionListenerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSMutableDictionary *_services;
    NSLock *_servicesLock;
    NSObject<OS_dispatch_queue> *_defaultHandlerQueue;
}

+ (id)defaultHandlerQueue;
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (void)stopListeningForService:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

