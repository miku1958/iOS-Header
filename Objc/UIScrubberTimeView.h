//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIScrubberTimeView : UIView
{
    NSString *_time;
    UIColor *_timeColor;
    UIColor *_timeShadowColor;
    unsigned int _align:2;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeShadowColor:(id)arg1;
- (id)time;

@end

