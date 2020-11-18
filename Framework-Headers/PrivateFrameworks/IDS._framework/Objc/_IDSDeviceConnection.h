//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSInputStream, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol>
{
    NSString *_nsuuid;
    BOOL _isDefaultPairedDevice;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    int _socket;
    CDUnknownBlockType _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    BOOL _hasTimedOut;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSInputStream *inputStream;
@property (readonly, strong, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) int socket;
@property (readonly) Class superclass;

- (void)_cleanupCompletionBlock;
- (void)_close;
- (void)_connect;
- (void)_daemonDied:(id)arg1;
- (void)close;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (BOOL)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

@end

