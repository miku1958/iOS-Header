//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class MTLBlitPassSampleBufferAttachmentDescriptorArray;

@interface MTLBlitPassDescriptor : NSObject <NSCopying>
{
}

@property (readonly) MTLBlitPassSampleBufferAttachmentDescriptorArray *sampleBufferAttachments; // @dynamic sampleBufferAttachments;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)blitPassDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

