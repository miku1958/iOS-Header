//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (id)init;
- (id)initWithOutputDeviceUID:(id)arg1;
- (unsigned long long)type;

@end

