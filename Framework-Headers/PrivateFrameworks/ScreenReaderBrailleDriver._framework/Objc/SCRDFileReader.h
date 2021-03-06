//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSThread;
@protocol SCRDFileReaderDelegate;

@interface SCRDFileReader : NSObject
{
    id<SCRDFileReaderDelegate> _delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}

- (void).cxx_destruct;
- (void)_readHandler:(id)arg1;
- (void)dealloc;
- (BOOL)hasStarted;
- (id)initWithDelegate:(id)arg1 fileHandle:(id)arg2;
- (void)invalidate;
- (void)invalidateWithWait:(BOOL)arg1;
- (BOOL)isValid;
- (void)start;

@end

