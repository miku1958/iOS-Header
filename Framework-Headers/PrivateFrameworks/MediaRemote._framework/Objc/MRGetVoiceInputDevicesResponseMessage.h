//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRGetVoiceInputDevicesResponseMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSArray *deviceIDs;
@property (readonly, nonatomic) long long errorCode;

- (id)initWithDeviceIDs:(id)arg1 errorCode:(long long)arg2;
- (unsigned long long)type;

@end
