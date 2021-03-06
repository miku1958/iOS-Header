//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class AVOutputContext, AVOutputDevice, MRAVInputStream, MRAVOutputDevice, MRAVOutputStream, MRDeviceInfo, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVOutputContextTransport : MRExternalDeviceTransport
{
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVOutputContext *_outputContext;
    MRDeviceInfo *_deviceInfo;
    NSError *_error;
    MRAVInputStream *_inputStream;
    MRAVOutputStream *_outputStream;
    BOOL _useSystemAuthenticationPrompt;
    MRAVOutputDevice *_outputDevice;
    AVOutputDevice *_avOutputDevice;
}

@property (readonly, nonatomic) AVOutputDevice *avOutputDevice; // @synthesize avOutputDevice=_avOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;

- (void).cxx_destruct;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1 avOutputDevice:(id)arg2 connectionType:(long long)arg3;
- (id)name;
- (long long)port;
- (BOOL)requiresCustomPairing;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end

