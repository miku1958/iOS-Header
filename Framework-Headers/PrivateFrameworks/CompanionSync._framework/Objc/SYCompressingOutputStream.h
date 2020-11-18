//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

#import <CompanionSync/NSStreamDelegate-Protocol.h>
#import <CompanionSync/SYCompressionBufferOptimization-Protocol.h>
#import <CompanionSync/SYOutputCompressor-Protocol.h>
#import <CompanionSync/SYStreamEventHandlerBlocks-Protocol.h>
#import <CompanionSync/SYStreamProgress-Protocol.h>
#import <CompanionSync/SYStreamThroughputCounter-Protocol.h>
#import <CompanionSync/_SYStreamRunLoopSourceHandler-Protocol.h>

@class NSProgress, NSString, _SYStreamGuts, _SYZlibStreamInternal;

@interface SYCompressingOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYCompressionBufferOptimization, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSOutputStream *_stream;
    _SYZlibStreamInternal *_internal;
    CDUnknownBlockType _onOpenComplete;
    CDUnknownBlockType _onBytesAvailable;
    CDUnknownBlockType _onSpaceAvailable;
    CDUnknownBlockType _onEndOfFile;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
    long long _level;
}

@property (readonly, nonatomic) unsigned long long bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property (nonatomic) long long compressionLevel; // @synthesize compressionLevel=_level;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long inputBufferSize;
@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (copy, nonatomic) CDUnknownBlockType onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property (copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property (copy, nonatomic) CDUnknownBlockType onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property (copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property (copy, nonatomic) CDUnknownBlockType onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
@property (copy, nonatomic) CDUnknownBlockType onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property (nonatomic) unsigned long long outputBufferSize;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_dispatchMyEvent:(unsigned long long)arg1;
- (int)_handlePendingInput;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initToMemory;
- (id)initWithDestinationStream:(id)arg1;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
