//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamReadChannel-Protocol.h>

@class NSString;
@protocol TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel>
{
    id<TSUStreamReadChannel> _readChannel;
    unsigned long long _remainingUncompressedSize;
    unsigned int _CRC;
    BOOL _validateCRC;
    struct z_stream_s _stream;
    unsigned long long _outBufferSize;
    char *_outBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(BOOL)arg4;
- (void)prepareBuffer;
- (BOOL)processData:(id)arg1 inflateResult:(int *)arg2 CRC:(unsigned int *)arg3 isDone:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (void)readWithHandler:(CDUnknownBlockType)arg1;

@end

