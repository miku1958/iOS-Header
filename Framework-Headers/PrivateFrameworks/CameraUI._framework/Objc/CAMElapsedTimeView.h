//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimer, UIImageView, UILabel;

@interface CAMElapsedTimeView : UIView
{
    BOOL _usingBadgeAppearance;
    long long _layoutStyle;
    long long _backgroundStyle;
    NSString *_contentSizeCategory;
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    UIImageView *__backgroundView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property (readonly, nonatomic) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property (readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property (readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property (readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property (readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic, getter=isShowingBackground) BOOL showingBackground;
@property (readonly, nonatomic) BOOL usingBadgeAppearance; // @synthesize usingBadgeAppearance=_usingBadgeAppearance;

- (void).cxx_destruct;
- (id)_backgroundRedColor;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 usingBadgeAppearance:(BOOL)arg2;
- (void)_endRecordingAnimation;
- (void)_setStartTime:(id)arg1;
- (void)_updateBackgroundViewAnimated:(BOOL)arg1;
- (void)_updateFont;
- (void)_updateForTimer:(id)arg1;
- (void)_updateText;
- (void)dealloc;
- (void)endTimer;
- (id)initWithBadgeAppearance;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)setShowingBackground:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startTimer;

@end
