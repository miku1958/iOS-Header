//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPDetailSlider;

@protocol MPDetailSliderDelegate <NSObject>

@optional
- (void)detailSlider:(MPDetailSlider *)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(MPDetailSlider *)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidBegin:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidCancel:(MPDetailSlider *)arg1;
- (void)detailSliderTrackingDidEnd:(MPDetailSlider *)arg1;
@end

