//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@class NSArray, NSMutableData;
@protocol PLDataArrayInputStreamProgressDelegate;

@interface PLDataArrayInputStream : NSInputStream
{
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    id<PLDataArrayInputStreamProgressDelegate> _progressDelegate;
    struct __CFRunLoopSource *_rls;
    CDUnknownFunctionPointerType _clientCallback;
    CDStruct_4210025a _clientContext;
}

@property (nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;

- (void)_scheduleCallback;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleProgressUpdate;
- (BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_streamEventTrigger;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_updateProgress;
- (unsigned long long)bytesRead;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)hasBytesAvailable;
- (id)initWithDataArray:(id)arg1;
- (void)open;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (unsigned long long)totalBytes;

@end

