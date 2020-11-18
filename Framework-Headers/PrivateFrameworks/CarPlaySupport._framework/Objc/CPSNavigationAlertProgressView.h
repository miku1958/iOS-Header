//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface CPSNavigationAlertProgressView : UIView
{
    BOOL _hasStartedAnimating;
    double _duration;
    UIView *_progressView;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL hasStartedAnimating; // @synthesize hasStartedAnimating=_hasStartedAnimating;
@property (strong, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2;
- (void)startAnimating;

@end
