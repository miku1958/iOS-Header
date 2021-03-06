//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>
#import <MTLCapture/MTLCounterSampleBuffer-Protocol.h>

@class CaptureMTLDevice, NSString;
@protocol MTLCounterSampleBuffer, MTLDevice;

@interface CaptureMTLCounterSampleBuffer : NSObject <MTLCounterSampleBuffer, CaptureMTLObject>
{
    id<MTLCounterSampleBuffer> _baseObject;
    CaptureMTLDevice *_captureDevice;
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
}

@property (readonly) id<MTLCounterSampleBuffer> baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;

- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)originalObject;
- (id)resolveCounterRange:(struct _NSRange)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)touch;

@end

