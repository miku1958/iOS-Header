//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, RadioRequestContext;
@protocol OS_dispatch_queue;

@interface MPCRadioOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;
    RadioRequestContext *_requestContext;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) RadioRequestContext *requestContext; // @synthesize requestContext=_requestContext;

+ (id)sharedQueue;
- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_cancelPlaybackPreparation;
- (void)_preparePlaybackWithPrepareRadioPlaybackOperation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addGetTracksOperation:(id)arg1;
- (void)addStationWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cancelPlaybackPreparation;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)loadRadioConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)preparePlaybackWithOperation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end

