//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;
@protocol OS_dispatch_queue;

@interface ACXStreamingZipSocketSender : NSObject
{
    BOOL _stopWriting;
    CDUnknownBlockType _progressBlock;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSURL *_url;
    long long _bytesOutput;
    long long _totalBytes;
    NSError *_error;
    CDUnknownBlockType _writerBlock;
}

@property long long bytesOutput; // @synthesize bytesOutput=_bytesOutput;
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (strong) NSError *error; // @synthesize error=_error;
@property (copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property BOOL stopWriting; // @synthesize stopWriting=_stopWriting;
@property long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property (readonly) NSURL *url; // @synthesize url=_url;
@property (readonly) CDUnknownBlockType writerBlock; // @synthesize writerBlock=_writerBlock;

+ (id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)beginSendingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelSending;
- (id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(CDUnknownBlockType)arg3;

@end
