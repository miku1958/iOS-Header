//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptBalloonCell.h>

@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell
{
    BOOL _speakerEnabled;
    BOOL _shouldShowText;
    CKSpeakerButton *_speakerButton;
}

@property (nonatomic) BOOL shouldShowText; // @synthesize shouldShowText=_shouldShowText;
@property (strong, nonatomic) CKSpeakerButton *speakerButton; // @synthesize speakerButton=_speakerButton;
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled; // @synthesize speakerEnabled=_speakerEnabled;
@property (nonatomic, getter=isSpeakerHidden) BOOL speakerHidden;

- (void)dealloc;
- (void)layoutSubviewsForAlignmentContents;
- (void)setOrientation:(BOOL)arg1;

@end
