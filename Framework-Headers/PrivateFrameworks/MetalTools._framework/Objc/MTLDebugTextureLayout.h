//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsTextureLayout.h>

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout
{
    MTLDebugDevice *_debugDevice;
    MTLTextureDescriptor *_descriptor;
}

@property (readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
@property (readonly, copy, nonatomic) MTLTextureDescriptor *descriptor; // @synthesize descriptor=_descriptor;

- (void)dealloc;
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
