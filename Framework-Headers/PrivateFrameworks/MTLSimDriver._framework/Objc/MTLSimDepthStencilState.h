//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLDepthStencilState.h>

#import <MTLSimDriver/MTLDepthStencilStateSPI-Protocol.h>
#import <MTLSimDriver/MTLSerializerDepthStencilState-Protocol.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimDepthStencilState : _MTLDepthStencilState <MTLDepthStencilStateSPI, MTLSerializerDepthStencilState>
{
    unsigned int _reference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) BOOL readsDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) Class superclass;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL writesStencil;

- (void)dealloc;
- (unsigned int)depthStencilRef;
- (id)initWithDescriptor:(id)arg1 reference:(unsigned int)arg2 device:(id)arg3;

@end

