//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMediaObject, CKMessageEntryRecordedAudioView;

@protocol CKMessageEntryRecordedAudioViewDelegate <NSObject>
- (void)messageEntryRecordedAudioView:(CKMessageEntryRecordedAudioView *)arg1 mediaObjectDidFinishPlaying:(CKMediaObject *)arg2;
- (void)messageEntryRecordedAudioViewPressedDelete:(CKMessageEntryRecordedAudioView *)arg1;
- (void)messageEntryRecordedAudioViewPressedPause:(CKMessageEntryRecordedAudioView *)arg1;
- (void)messageEntryRecordedAudioViewPressedPlay:(CKMessageEntryRecordedAudioView *)arg1;
@end
