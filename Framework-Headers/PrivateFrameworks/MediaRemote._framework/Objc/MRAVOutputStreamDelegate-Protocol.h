//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class AVOutputDeviceCommunicationChannel, MRAVOutputDeviceOutputStream;

@protocol MRAVOutputStreamDelegate <NSObject>
- (void)outputStream:(MRAVOutputDeviceOutputStream *)arg1 didCloseCommunicationChannel:(AVOutputDeviceCommunicationChannel *)arg2;
@end
