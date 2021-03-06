//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSProxyConnection.h>

#import <CFNetwork/NSStreamDelegate-Protocol.h>
#import <CFNetwork/NSURLSessionStreamDelegate-Protocol.h>

@class NSInputStream, NSObject, NSOutputStream, NSString, NSURLSessionStreamTask;
@protocol OS_dispatch_queue;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnected;
    NSString *_host;
    int _port;
    BOOL _dataAvailableForReading;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionStreamTask *_streamTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)cancel;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

