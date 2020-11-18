//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRClientUpdatesConfigMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) BOOL artworkUpdates;
@property (readonly, nonatomic) BOOL keyboardUpdates;
@property (readonly, nonatomic) BOOL nowPlayingUpdates;
@property (readonly, nonatomic) BOOL outputDeviceUpdates;
@property (readonly, nonatomic) BOOL systemEndpointUpdates;
@property (readonly, nonatomic) BOOL volumeUpdates;

- (id)initWithNowPlayingUpdates:(BOOL)arg1 artworkUpdates:(BOOL)arg2 volumeUpdates:(BOOL)arg3 keyboardUpdates:(BOOL)arg4 outputDeviceUpdates:(BOOL)arg5 systemEndpointUpdates:(BOOL)arg6;
- (unsigned long long)type;

@end
