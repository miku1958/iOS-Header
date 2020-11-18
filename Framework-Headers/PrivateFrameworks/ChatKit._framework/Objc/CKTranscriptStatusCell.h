//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptLabelCell.h>

@class NSAttributedString, UIButton;

@interface CKTranscriptStatusCell : CKTranscriptLabelCell
{
    UIButton *_statusButton;
    double _prevBalloonWidth;
}

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (nonatomic) double prevBalloonWidth; // @synthesize prevBalloonWidth=_prevBalloonWidth;
@property (strong, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;

+ (id)statusButton;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)zoomAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureForChatItem:(id)arg1;
- (void)dealloc;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)setOrientation:(BOOL)arg1;

@end
