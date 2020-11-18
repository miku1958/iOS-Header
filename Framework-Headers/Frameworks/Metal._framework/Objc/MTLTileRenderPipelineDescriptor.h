//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLPipelineBufferDescriptorArray, MTLTileRenderPipelineColorAttachmentDescriptorArray, NSString;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>
{
}

@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments; // @dynamic colorAttachments;
@property (copy, nonatomic) NSString *label; // @dynamic label;
@property (nonatomic) unsigned long long rasterSampleCount; // @dynamic rasterSampleCount;
@property (nonatomic) BOOL threadgroupSizeMatchesTileSize; // @dynamic threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers; // @dynamic tileBuffers;
@property (strong, nonatomic) id<MTLFunction> tileFunction; // @dynamic tileFunction;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;

@end

