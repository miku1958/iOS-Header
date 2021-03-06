//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import <MediaRemote/AVOutputDeviceCommunicationChannelDelegate-Protocol.h>

@class AVOutputDevice, NSString;

@interface MRAVOutputDeviceInputStream : MRAVBufferedInputStream <AVOutputDeviceCommunicationChannelDelegate>
{
    AVOutputDevice *_outputDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithOutputDevice:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)outputDevice:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputDevice:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;

@end

