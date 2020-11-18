//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTSUReadChannel-Protocol.h>

@class NSArray, NSError, NSString;
@protocol MDLTSUReadChannel, MDLTSUStreamReadChannel, OS_dispatch_data, OS_dispatch_queue;

@interface MDLTSUBufferedReadChannel : NSObject <MDLTSUReadChannel>
{
    NSObject<OS_dispatch_queue> *_readQueue;
    id<MDLTSUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    long long _sourceOffset;
    unsigned long long _sourceLength;
    NSError *_sourceReadChannelError;
    NSArray *_blockInfos;
    CDUnknownBlockType _streamReadChannelBlock;
    id<MDLTSUStreamReadChannel> _streamReadChannel;
    CDUnknownBlockType _streamReadChannelSourceHandler;
    BOOL _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long long _streamOutputOutstandingLength;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)arg1 length:(unsigned long long)arg2 isReadDone:(BOOL *)arg3;
- (void)_readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_resetStreamReadChannelIfNeededForOffset:(long long)arg1 length:(unsigned long long)arg2;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 blockInfos:(id)arg2 streamReadChannelBlock:(CDUnknownBlockType)arg3;
- (id)initWithReadChannel:(id)arg1 sourceReadBufferSize:(unsigned long long)arg2 blockInfos:(id)arg3 streamReadChannelBlock:(CDUnknownBlockType)arg4;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)setStreamReadChannelSourceHandler:(CDUnknownBlockType)arg1;

@end

