//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUI/NSObject-Protocol.h>

@class NSURL;
@protocol IMFullScreenEffectSoundPlayerDelegate;

@protocol IMFullScreenEffectSoundPlayer <NSObject>

@property (weak, nonatomic) id<IMFullScreenEffectSoundPlayerDelegate> delegate;

- (id)initWithSoundURL:(NSURL *)arg1 hasHapticTrack:(BOOL)arg2;
- (void)prepareToPlaySound;
- (void)startPlayingSound;
- (void)stopPlayingSound;
@end

