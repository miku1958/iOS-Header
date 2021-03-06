//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRAVOutputDevice, MRIDSInputStream, MRIDSOutputStream;

@interface MRIDSTransport : MRExternalDeviceTransport
{
    MRIDSInputStream *_inputStream;
    MRIDSOutputStream *_outputStream;
    MRAVOutputDevice *_outputDevice;
}

- (void).cxx_destruct;
- (void)_handleDeviceDisconnected:(id)arg1;
- (id)deviceInfo;
- (id)error;
- (BOOL)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1;
- (id)name;
- (long long)port;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1;
- (BOOL)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end

