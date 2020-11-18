//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKDispatch : NSObject
{
    NSObject<OS_dispatch_queue> *_homeQueue;
    NSObject<OS_dispatch_queue> *_layoutQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_queue> *_layoutWorkerQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *homeQueue; // @synthesize homeQueue=_homeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutWorkerQueue; // @synthesize layoutWorkerQueue=_layoutWorkerQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;

+ (id)defaultDispatch;
+ (id)iconRenderQueue;
+ (id)preemptiveLoadQueue;
+ (id)textureManagerRootQueue;
+ (id)tileDecodeQueue;
+ (id)tileDecodeStylingQueue;
- (id)_initWithHomeQueue:(id)arg1 layoutQueue:(id)arg2 renderQueue:(id)arg3 layoutWorkerQueue:(id)arg4;
- (id)_newLayoutQueue:(const char *)arg1;
- (id)_newLayoutWorkerQueue:(const char *)arg1;
- (id)_newRenderQueue:(const char *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithHomeQueue:(id)arg1;

@end

