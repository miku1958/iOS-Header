//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class AVOutputContext, MRAVInputStream, MRAVOutputStream, NSArray, NSError, NSObject, _MRDeviceInfoMessageProtobuf;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVOutputContextTransport : MRExternalDeviceTransport
{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVOutputContext *_outputContext;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSError *_error;
    MRAVInputStream *_inputStream;
    MRAVOutputStream *_outputStream;
    BOOL _useSystemAuthenticationPrompt;
    NSArray *_outputDevices;
}

@property (readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;

- (void).cxx_destruct;
- (void)_destroyRemoteControlContext;
- (id)_onQueue_createRemoteControlContextWithID:(id)arg1;
- (void)_onQueue_initializeOutputContext;
- (void)_onQueue_resetStreams;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForOutputContext:(id)arg1;
- (void)_unregisterNotificationsForOutputContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2;
- (id)hostname;
- (id)initWithOutputDevices:(id)arg1;
- (id)name;
- (long long)port;
- (BOOL)requiresCustomPairing;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;

@end

