//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CaptureMTLObject

@property (readonly) id baseObject;
@property (readonly) unsigned long long streamReference;
@property (readonly) struct GTTraceContext *traceContext;
@property (readonly) struct GTTraceStream *traceStream;

- (void)touch;
@end
