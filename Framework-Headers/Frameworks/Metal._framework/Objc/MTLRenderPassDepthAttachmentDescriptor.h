//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPassAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor
{
    unsigned long long _depthResolveFilter;
}

@property (nonatomic) double clearDepth; // @dynamic clearDepth;
@property (nonatomic) unsigned long long depthResolveFilter; // @synthesize depthResolveFilter=_depthResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end

