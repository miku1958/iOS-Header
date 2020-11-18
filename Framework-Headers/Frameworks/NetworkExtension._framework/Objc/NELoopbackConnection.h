//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_nw_context;

@interface NELoopbackConnection : NSObject
{
    unsigned long long _blobSizes[4];
    struct nw_protocol _protocol;
    struct nw_frame_array_s _currentInputFrames;
    BOOL _outputFinished;
    NSObject<OS_nw_context> *_context;
    unsigned long long _currentBlobSizeIndex;
    unsigned long long _totalBytesReceived;
}

@property (readonly) NSObject<OS_nw_context> *context; // @synthesize context=_context;
@property unsigned long long currentBlobSizeIndex; // @synthesize currentBlobSizeIndex=_currentBlobSizeIndex;
@property BOOL outputFinished; // @synthesize outputFinished=_outputFinished;
@property (readonly) struct nw_protocol *protocol;
@property unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;

- (void).cxx_destruct;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4 outIsEOF:(BOOL *)arg5;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (void)dealloc;
- (void)handleDetachedFromProtocol;
- (void)handleOutputFinished;
- (void)handleOutputFrame:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)notifyInputHandler;

@end
