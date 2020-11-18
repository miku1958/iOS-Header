//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUStreamWriteChannel-Protocol.h>

@class NSString, TSUZipFileWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>
{
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    BOOL _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)close;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithArchiveWriter:(id)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

