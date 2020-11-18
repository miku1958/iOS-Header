//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSCore/MTLCommandEncoder-Protocol.h>
#import <MPSCore/MTLComputeCommandEncoder-Protocol.h>

@class NSString;
@protocol MTLComputeCommandEncoder, MTLDevice;

@interface MPSComputeEncoder : NSObject <MTLComputeCommandEncoder, MTLCommandEncoder>
{
    id<MTLComputeCommandEncoder> _encoder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @dynamic device;
@property (readonly) unsigned long long dispatchType; // @dynamic dispatchType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @dynamic label;
@property (readonly) Class superclass;

- (id)computeCommandEncoder;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCommandBuffer:(id)arg1 withDispatchType:(unsigned long long)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;

@end
