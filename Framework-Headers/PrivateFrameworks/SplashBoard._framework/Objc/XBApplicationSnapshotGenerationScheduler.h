//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBApplicationSnapshotImageGenerationScheduling-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface XBApplicationSnapshotGenerationScheduler : NSObject <XBApplicationSnapshotImageGenerationScheduling>
{
    NSObject<OS_dispatch_workloop> *_imageGenerationWorkloop;
    NSObject<OS_dispatch_queue> *_imageGenerationQueue;
    NSObject<OS_dispatch_workloop> *_dataGenerationWorkloop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (void)performImageDataGenerationAsync:(CDUnknownBlockType)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)performImageDataGenerationAsyncAndWait:(CDUnknownBlockType)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)performImageGenerationAsync:(CDUnknownBlockType)arg1;
- (void)performImageGenerationAsyncAndWait:(CDUnknownBlockType)arg1;

@end

