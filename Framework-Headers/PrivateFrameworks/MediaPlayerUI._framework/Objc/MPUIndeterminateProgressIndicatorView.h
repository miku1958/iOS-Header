//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MPUIndeterminateProgressIndicatorView : UIView
{
    double _progressLineWidth;
    double _progressGap;
}

@property (nonatomic) double progressGap; // @synthesize progressGap=_progressGap;
@property (nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;

- (void)_updateAnimation;
- (void)_willEnterForeground:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;

@end

