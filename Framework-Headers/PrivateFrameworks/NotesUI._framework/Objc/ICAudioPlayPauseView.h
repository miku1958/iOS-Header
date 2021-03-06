//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, CALayer, ICAttachment, ICNoteEditorIconImageView;

@interface ICAudioPlayPauseView : UIView
{
    ICAttachment *_audioAttachment;
    CALayer *_backgroundLayer;
    ICNoteEditorIconImageView *_playView;
    ICNoteEditorIconImageView *_pauseView;
}

@property (readonly, nonatomic) AVAsset *audio;
@property (strong, nonatomic) ICAttachment *audioAttachment; // @synthesize audioAttachment=_audioAttachment;
@property (strong, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property (readonly, nonatomic) BOOL isPlaying;
@property (strong, nonatomic) ICNoteEditorIconImageView *pauseView; // @synthesize pauseView=_pauseView;
@property (strong, nonatomic) ICNoteEditorIconImageView *playView; // @synthesize playView=_playView;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)addSubImageViewForImage:(id)arg1;
- (void)audioDidChange;
- (void)audioPlaybackPauseNotification:(id)arg1;
- (void)audioPlaybackPlayNotification:(id)arg1;
- (void)audioPlaybackStopNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)audioWillChange;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didPlayToEndNotification:(id)arg1;
- (id)foregroundStrokeColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (void)pause;
- (void)play;
- (void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(BOOL)arg3;
- (void)sharedInit;
- (void)showPaused;
- (void)showPlaying;
- (void)showPressed:(BOOL)arg1;
- (void)showStopped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tapGesture:(id)arg1;
- (void)tintColorDidChange;
- (void)togglePlayPause;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateTime:(double)arg1 duration:(double)arg2;

@end

