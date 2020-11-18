//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, UIActivityIndicatorView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface ICDocCamSpinner : NSObject
{
    NSDate *_showDate;
    UIActivityIndicatorView *_activityIndicator;
    double _minimumDuration;
    UIViewPropertyAnimator *_animator;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (nonatomic) double minimumDuration; // @synthesize minimumDuration=_minimumDuration;
@property (strong, nonatomic) NSDate *showDate; // @synthesize showDate=_showDate;

- (void).cxx_destruct;
- (void)hide;
- (id)initWithView:(id)arg1 minimumDuration:(double)arg2;
- (void)show;

@end
