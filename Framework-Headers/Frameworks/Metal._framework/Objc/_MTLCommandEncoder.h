//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

@class NSMutableArray, NSString, _MTLCommandBuffer;
@protocol MTLCommandBuffer, MTLDevice, MTLFence;

@interface _MTLCommandEncoder : _MTLObjectWithLabel
{
    id<MTLDevice> _device;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    unsigned long long _numThisEncoder;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    id<MTLFence> _progressFence;
    BOOL _needsFrameworkAssistedErrorTracking;
    BOOL _isProgressTrackingEncoder;
    NSMutableArray *_debugSignposts;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long dispatchType; // @dynamic dispatchType;
@property (readonly, nonatomic) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property (copy) NSString *label; // @dynamic label;
@property (nonatomic) unsigned long long numThisEncoder; // @synthesize numThisEncoder=_numThisEncoder;
@property (readonly, nonatomic, getter=getType) unsigned long long type;

- (id)commandBuffer;
- (void)dealloc;
- (id)description;
- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)getDriverUniqueID;
- (id)initWithCommandBuffer:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)memoryBarrierNotificationWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierNotificationWithScope:(unsigned long long)arg1;
- (void)popDebugGroup;
- (void)preEndEncoding;
- (void)pushDebugGroup:(id)arg1;
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;

@end

