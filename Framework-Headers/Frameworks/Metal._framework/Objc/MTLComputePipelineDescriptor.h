//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLLinkedFunctions, MTLPipelineBufferDescriptorArray, MTLStageInputOutputDescriptor, NSArray, NSString;
@protocol MTLFunction;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>
{
}

@property (copy, nonatomic) NSArray *binaryArchives; // @dynamic binaryArchives;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers; // @dynamic buffers;
@property (strong, nonatomic) id<MTLFunction> computeFunction; // @dynamic computeFunction;
@property (nonatomic) BOOL forceResourceIndex; // @dynamic forceResourceIndex;
@property (copy, nonatomic) NSArray *insertLibraries; // @dynamic insertLibraries;
@property (copy, nonatomic) NSString *label; // @dynamic label;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions; // @dynamic linkedFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth; // @dynamic maxCallStackDepth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup; // @dynamic maxTotalThreadsPerThreadgroup;
@property (nonatomic) unsigned long long resourceIndex; // @dynamic resourceIndex;
@property (copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor; // @dynamic stageInputDescriptor;
@property (nonatomic) BOOL supportAddingBinaryFunctions; // @dynamic supportAddingBinaryFunctions;
@property (nonatomic) BOOL supportIndirectCommandBuffers; // @dynamic supportIndirectCommandBuffers;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth; // @dynamic threadGroupSizeIsMultipleOfThreadExecutionWidth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end
