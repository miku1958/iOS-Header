//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/NSObject-Protocol.h>

@class _UIActionSlider;

@protocol _UIActionSliderDelegate <NSObject>

@optional
- (void)actionSlider:(_UIActionSlider *)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCancelSlide:(_UIActionSlider *)arg1;
- (void)actionSliderDidCompleteSlide:(_UIActionSlider *)arg1;
@end

