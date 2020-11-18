//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileHandle.h>

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_io, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteFileHandle : NSFileHandle
{
    int _fd;
    unsigned short _flags;
    struct __CFRunLoopSource *_source;
    struct __CFRunLoop *_rl;
    unsigned short _activity;
    int _error;
    int _resultSocket;
    NSObject<OS_dispatch_source> *_dsrc;
    NSObject<OS_dispatch_data> *_resultData;
    NSObject<OS_dispatch_queue> *_fhQueue;
    NSObject<OS_dispatch_io> *_readChannel;
    CDUnknownBlockType _readabilityHandler;
    CDUnknownBlockType _writeabilityHandler;
    NSObject<OS_dispatch_source> *_readMonitoringSource;
    NSObject<OS_dispatch_source> *_writeMonitoringSource;
    NSObject<OS_dispatch_queue> *_monitoringQueue;
}

- (void)_cancelDispatchSources;
- (void)_closeOnDealloc;
- (void)_locked_clearHandler:(CDUnknownBlockType *)arg1 forSource:(id *)arg2;
- (id)_monitor:(int)arg1;
- (void)acceptConnectionInBackgroundAndNotify;
- (void)acceptConnectionInBackgroundAndNotifyForModes:(id)arg1;
- (id)availableData;
- (void)closeFile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id *)arg4;
- (unsigned long long)offsetInFile;
- (void)performActivity:(long long)arg1 modes:(id)arg2;
- (id)port;
- (id)readDataOfLength:(unsigned long long)arg1;
- (unsigned long long)readDataOfLength:(unsigned long long)arg1 buffer:(char *)arg2;
- (id)readDataToEndOfFile;
- (void)readInBackgroundAndNotify;
- (void)readInBackgroundAndNotifyForModes:(id)arg1;
- (void)readToEndOfFileInBackgroundAndNotify;
- (void)readToEndOfFileInBackgroundAndNotifyForModes:(id)arg1;
- (CDUnknownBlockType)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (void)setPort:(id)arg1;
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;
- (void)synchronizeFile;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)waitForDataInBackgroundAndNotify;
- (void)waitForDataInBackgroundAndNotifyForModes:(id)arg1;
- (void)writeData:(id)arg1;
- (CDUnknownBlockType)writeabilityHandler;

@end

