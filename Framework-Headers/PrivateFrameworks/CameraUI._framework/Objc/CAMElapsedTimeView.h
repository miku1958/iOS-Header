//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSTimer, UIImageView, UILabel;

@interface CAMElapsedTimeView : UIView
{
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property (readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property (readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property (readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property (readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)_endRecordingAnimation;
- (void)_setStartTime:(id)arg1;
- (void)_update:(id)arg1;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)startTimer;
- (void)updateToContentSize:(id)arg1;

@end

