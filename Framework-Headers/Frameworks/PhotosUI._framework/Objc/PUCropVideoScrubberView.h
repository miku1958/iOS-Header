//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVTimeFormatter, NSLayoutConstraint, NSObject, UILabel, UISlider;
@protocol PUCropVideoScrubberViewDelegate;

__attribute__((visibility("hidden")))
@interface PUCropVideoScrubberView : UIView
{
    CDStruct_1b6d18a9 _startingTime;
    CDStruct_1b6d18a9 _endingTime;
    CDStruct_1b6d18a9 _currentTime;
    AVTimeFormatter *_beforeTimeFormatter;
    AVTimeFormatter *_afterTimeFormatter;
    BOOL _beforeTimeLabelOffset;
    BOOL _afterTimeLabelOffset;
    NSLayoutConstraint *_beforeLabelVerticalConstraint;
    NSLayoutConstraint *_afterLabelVerticalConstraint;
    UISlider *_scrubberSlider;
    UILabel *_beforeTimeLabel;
    UILabel *_afterTimeLabel;
    NSObject<PUCropVideoScrubberViewDelegate> *_delegate;
}

@property (strong, nonatomic) UILabel *afterTimeLabel; // @synthesize afterTimeLabel=_afterTimeLabel;
@property (strong, nonatomic) UILabel *beforeTimeLabel; // @synthesize beforeTimeLabel=_beforeTimeLabel;
@property (weak, nonatomic) NSObject<PUCropVideoScrubberViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UISlider *scrubberSlider; // @synthesize scrubberSlider=_scrubberSlider;

- (void).cxx_destruct;
- (id)initWithStartingTime:(CDStruct_1b6d18a9)arg1 endingTime:(CDStruct_1b6d18a9)arg2 currentTime:(CDStruct_1b6d18a9)arg3;
- (void)layoutSubviews;
- (void)offsetTimeLabelsIfNecessary;
- (void)setCurrentTime:(CDStruct_1b6d18a9)arg1;
- (void)videoScrubberDoneChanging;
- (void)videoScrubberValueChanged:(id)arg1;

@end
