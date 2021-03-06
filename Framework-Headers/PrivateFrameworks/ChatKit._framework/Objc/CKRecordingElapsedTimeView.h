//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSDateComponentsFormatter, NSTimer, UILabel;

__attribute__((visibility("hidden")))
@interface CKRecordingElapsedTimeView : UIView
{
    NSDateComponentsFormatter *__durationFormatter;
    UILabel *__timeLabel;
    UIView *__recordingDotView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property (readonly, nonatomic) NSDateComponentsFormatter *_durationFormatter; // @synthesize _durationFormatter=__durationFormatter;
@property (readonly, nonatomic) UIView *_recordingDotView; // @synthesize _recordingDotView=__recordingDotView;
@property (readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property (readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
@property (readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitialization;
- (void)_endRecordingAnimation;
- (void)_update:(id)arg1;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetTimer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startTimer;

@end

