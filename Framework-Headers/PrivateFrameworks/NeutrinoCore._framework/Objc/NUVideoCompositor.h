//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/AVVideoCompositing-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NUVideoCompositor : NSObject <AVVideoCompositing>
{
    BOOL _shouldCancelAllRequests;
    NSObject<OS_dispatch_queue> *_renderingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;

- (void).cxx_destruct;
- (void)cancelAllPendingVideoCompositionRequests;
- (void)failVideoCompositionRequest:(id)arg1 error:(id)arg2;
- (void)fulfillVideoCompositionRequest:(id)arg1;
- (id)init;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (id)videoFramesFromRequest:(id)arg1;

@end
