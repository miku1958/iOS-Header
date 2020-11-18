//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface ARImageBasedTechnique : ARTechnique
{
    NSMutableArray *_pendingResultData;
    NSMutableArray *_pendingFrameReferences;
    NSMutableArray *_pendingRequestContexts;
    NSObject<OS_dispatch_semaphore> *_pendingRequestsSemaphore;
}

- (void).cxx_destruct;
- (BOOL)context:(id)arg1 matchesFrameReference:(id)arg2;
- (id)init;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (id)processData:(id)arg1;
- (void)pushResultData:(id)arg1 forFrame:(struct __CVBuffer *)arg2;
- (void)pushResultData:(id)arg1 forFrameReference:(id)arg2;
- (void)pushResultData:(id)arg1 forTimestamp:(double)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end

