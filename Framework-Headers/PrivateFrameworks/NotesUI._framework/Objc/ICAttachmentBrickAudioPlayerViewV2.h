//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/ICAudioPlayPauseView.h>

@class ICArcLayer, ICCircleLayer;
@protocol ICAttachmentBrickAudioPlayerViewV2Delegate;

@interface ICAttachmentBrickAudioPlayerViewV2 : ICAudioPlayPauseView
{
    id<ICAttachmentBrickAudioPlayerViewV2Delegate> _delegate;
    ICCircleLayer *_progressGrooveLayer;
    ICArcLayer *_progressCircleLayer;
}

@property (nonatomic) id<ICAttachmentBrickAudioPlayerViewV2Delegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) ICArcLayer *progressCircleLayer; // @synthesize progressCircleLayer=_progressCircleLayer;
@property (strong, nonatomic) ICCircleLayer *progressGrooveLayer; // @synthesize progressGrooveLayer=_progressGrooveLayer;

- (void).cxx_destruct;
- (id)addSubImageViewForImage:(id)arg1;
- (struct UIColor *)backgroundNormalColor;
- (struct UIColor *)backgroundPressedColor;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)createProgressLayers;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)sharedInit;
- (void)showDisabled:(BOOL)arg1;
- (void)showPressed:(BOOL)arg1;
- (void)showStopped;
- (id)tintColor;
- (void)updateTime:(double)arg1 duration:(double)arg2;

@end
