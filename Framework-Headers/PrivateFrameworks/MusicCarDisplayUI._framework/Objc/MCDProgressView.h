//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDProgressBarView, NSLayoutConstraint, UILabel;

@interface MCDProgressView : UIView
{
    BOOL _progressActive;
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    MCDProgressBarView *_progressBarView;
    NSLayoutConstraint *_leftConstant;
    NSLayoutConstraint *_rightConstant;
    float _progress;
    BOOL _isLiveStream;
}

@property (nonatomic) BOOL isLiveStream; // @synthesize isLiveStream=_isLiveStream;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setPlaybackTime:(double)arg1 duration:(double)arg2;

@end

