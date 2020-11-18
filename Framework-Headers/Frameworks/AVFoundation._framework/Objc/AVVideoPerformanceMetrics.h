//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject
{
    AVVideoPerformanceMetricsInternal *_performanceMetricsInternal;
}

@property (readonly, nonatomic) unsigned long long numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) unsigned long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) double totalFrameDelay;
@property (readonly, nonatomic) unsigned long long totalNumberOfVideoFrames;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end

