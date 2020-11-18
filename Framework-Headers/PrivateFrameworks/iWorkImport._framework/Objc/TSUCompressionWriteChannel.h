//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSUStreamWriteChannel-Protocol.h>

@class NSString, TSUStreamCompression;
@protocol TSUStreamWriteChannel;

__attribute__((visibility("hidden")))
@interface TSUCompressionWriteChannel : NSObject <TSUStreamWriteChannel>
{
    id<TSUStreamWriteChannel> _writeChannel;
    TSUStreamCompression *_compressor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)close;
- (void)dealloc;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithWriteChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

