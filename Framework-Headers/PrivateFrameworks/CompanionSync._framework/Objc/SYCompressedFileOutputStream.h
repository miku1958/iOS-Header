//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

#import <CompanionSync/NSStreamDelegate-Protocol.h>
#import <CompanionSync/SYOutputCompressor-Protocol.h>
#import <CompanionSync/SYStreamEventHandlerBlocks-Protocol.h>
#import <CompanionSync/SYStreamProgress-Protocol.h>
#import <CompanionSync/SYStreamThroughputCounter-Protocol.h>
#import <CompanionSync/_SYStreamRunLoopSourceHandler-Protocol.h>

@class NSProgress, NSString, NSURL, _SYStreamGuts;

@interface SYCompressedFileOutputStream : NSOutputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYOutputCompressor, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSURL *_url;
    BOOL _append;
    int _fd;
    int _class;
    struct gzFile_s *_file;
    long long _level;
    struct os_unfair_lock_s _internalLock;
    _SYStreamGuts *_internal;
    CDUnknownBlockType _onOpenComplete;
    CDUnknownBlockType _onBytesAvailable;
    CDUnknownBlockType _onSpaceAvailable;
    CDUnknownBlockType _onEndOfFile;
    CDUnknownBlockType _onError;
    CDUnknownBlockType _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
}

@property (readonly, nonatomic) unsigned long long bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property (nonatomic) long long compressionLevel; // @synthesize compressionLevel=_level;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
@property (copy, nonatomic) CDUnknownBlockType onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property (copy, nonatomic) CDUnknownBlockType onClose; // @synthesize onClose=_onClose;
@property (copy, nonatomic) CDUnknownBlockType onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property (copy, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property (copy, nonatomic) CDUnknownBlockType onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
@property (copy, nonatomic) CDUnknownBlockType onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postEventToDelegate:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)hasSpaceAvailable;
- (id)initToCompressedFileAtURL:(id)arg1 shouldAppend:(BOOL)arg2;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (void)open;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

