//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage
{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

@property (readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;

- (void).cxx_destruct;
- (unsigned long long)_lastSupportedMessageType;
- (unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (unsigned long long)encryptionType;
- (id)initWithDeviceInfo:(id)arg1;
- (unsigned long long)type;

@end

