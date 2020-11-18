//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeDidChangeMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) NSString *endpointIdentifier;
@property (readonly, nonatomic) NSString *outputDeviceIdentifier;
@property (readonly, nonatomic) float volume;

- (id)initWithVolume:(float)arg1 endpointIdentifier:(id)arg2 outputDeviceIdentifier:(id)arg3;
- (unsigned long long)type;

@end

