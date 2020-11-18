//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAudioController, CKMediaObject;

@protocol CKAudioControllerDelegate <NSObject>

@optional
- (void)audioController:(CKAudioController *)arg1 mediaObjectDidFinishPlaying:(CKMediaObject *)arg2;
- (void)audioController:(CKAudioController *)arg1 mediaObjectProgressDidChange:(CKMediaObject *)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(CKAudioController *)arg1;
- (void)audioControllerDidStop:(CKAudioController *)arg1;
- (void)audioControllerPlayingDidChange:(CKAudioController *)arg1;
@end

