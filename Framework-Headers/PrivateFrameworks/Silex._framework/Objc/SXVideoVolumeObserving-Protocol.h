//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideoVolumeObserving <NSObject>

@property (copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;

@end

