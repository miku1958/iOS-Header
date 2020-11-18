//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <StreamingZip/StreamingUnzipProtocol-Protocol.h>

@class NSXPCConnection, StreamingUnzipState;
@protocol OS_dispatch_queue, StreamingUnzipDelegateProtocol;

@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol>
{
    void *_decompressionOutputBuffer;
    StreamingUnzipState *_currentState;
    int _activeCallbacks;
    double _lastExtractionProgressSent;
    NSXPCConnection *xpcConnection;
    id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate;
    NSObject<OS_dispatch_queue> *inProcessDelegateQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *inProcessDelegateQueue; // @synthesize inProcessDelegateQueue;
@property (weak, nonatomic) id<StreamingUnzipDelegateProtocol> inProcessExtractorDelegate; // @synthesize inProcessExtractorDelegate;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection;

- (void).cxx_destruct;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_extractionEnteredPassThroughMode;
- (void)_sendExtractionCompleteAtArchivePath:(id)arg1;
- (void)_sendExtractionProgress:(double)arg1;
- (void)_setErrorState;
- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)finishStreamWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setActiveCallbacks:(int)arg1;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)supplyBytes:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)suspendStreamWithReply:(CDUnknownBlockType)arg1;

@end

