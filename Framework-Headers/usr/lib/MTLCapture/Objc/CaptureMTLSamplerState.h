//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLSamplerStateSPI-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLSamplerState, MTLSamplerStateSPI;

@interface CaptureMTLSamplerState : NSObject <MTLSamplerStateSPI, CaptureMTLObject>
{
    id<MTLSamplerStateSPI> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) id<MTLSamplerState> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;
@property (readonly) unsigned long long uniqueIdentifier;

- (void).cxx_destruct;
- (id)_quicklookData;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)originalObject;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)touch;

@end
