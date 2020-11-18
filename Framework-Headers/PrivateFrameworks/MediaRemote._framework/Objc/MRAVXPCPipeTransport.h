//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

#import <MediaRemote/MRVirtualDevicePipeProtocol-Protocol.h>
#import <MediaRemote/NSStreamDelegate-Protocol.h>

@class CURunLoopThread, MRAVOutputDevice, MRDeviceInfo, NSError, NSInputStream, NSObject, NSOutputStream, NSRunLoop, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <NSStreamDelegate, MRVirtualDevicePipeProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    NSInputStream *_inputStream;
    NSInputStream *_inputStreamInternal;
    NSOutputStream *_outputStream;
    NSOutputStream *_outputStreamInternal;
    BOOL _useSystemAuthenticationPrompt;
    NSXPCConnection *_pipeConnection;
    NSRunLoop *_runLoop;
    CURunLoopThread *_runLoopThread;
    MRAVOutputDevice *_outputDevice;
    NSXPCListenerEndpoint *_pipeEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
@property (readonly, nonatomic) NSXPCListenerEndpoint *pipeEndpoint; // @synthesize pipeEndpoint=_pipeEndpoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onQueue_resetStreams;
- (void)dealloc;
- (id)deviceInfo;
- (id)error;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1 pipeEndpoint:(id)arg2;
- (id)name;
- (long long)port;
- (BOOL)requiresCustomPairing;
- (void)reset;
- (void)sendData:(id)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)uid;

@end
