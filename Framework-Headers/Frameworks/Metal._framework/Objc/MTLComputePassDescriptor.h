//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLComputePassSampleBufferAttachmentDescriptorArray;

@interface MTLComputePassDescriptor : NSObject <NSCopying>
{
}

@property (nonatomic) unsigned long long dispatchType; // @dynamic dispatchType;
@property (readonly) MTLComputePassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments; // @dynamic sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)computePassDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
