//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VKMapSnapshotServer : NSObject
{
    NSObject<OS_dispatch_queue> *_homeQueue;
}

- (void)_renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithHomeQueue:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

