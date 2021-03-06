//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface MSVStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_pendingWriteDataList;
    BOOL _stopped;
    BOOL _closeOnStop;
    struct z_stream_s *_zstreamp;
    BOOL _compressed;
    unsigned long long _maximumBufferSize;
    double _timestamp;
    unsigned long long _bytesWritten;
    CDUnknownBlockType _canWriteDataBlock;
    CDUnknownBlockType _didFinishWritingBlock;
    CDUnknownBlockType _didEncounterErrorBlock;
    NSOutputStream *_outputStream;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property (copy, nonatomic) CDUnknownBlockType canWriteDataBlock; // @synthesize canWriteDataBlock=_canWriteDataBlock;
@property (nonatomic, getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType didEncounterErrorBlock; // @synthesize didEncounterErrorBlock=_didEncounterErrorBlock;
@property (copy, nonatomic) CDUnknownBlockType didFinishWritingBlock; // @synthesize didFinishWritingBlock=_didFinishWritingBlock;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (nonatomic) unsigned long long maximumBufferSize; // @synthesize maximumBufferSize=_maximumBufferSize;
@property (strong, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (void)_onQueue_stop;
- (BOOL)_processInput:(id)arg1 generatingDecompressedData:(id *)arg2;
- (void)_writeAvailablePendingData;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopWithCompletion:(CDUnknownBlockType)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (BOOL)writeAllData:(id)arg1 error:(id *)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeStreamError:(CDStruct_87dc826d)arg1;

@end

