//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUIFramework/__MPUTransportControlAccessibility_super.h>

@interface MPUTransportControlAccessibility : __MPUTransportControlAccessibility_super
{
}

@property (readonly, nonatomic) long long accessibilityTransportControlType;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (id)accessibilityLabelForTransportControlWithType:(long long)arg1 isPlaying:(BOOL)arg2 isAlwaysLive:(BOOL)arg3 displayedSkipForwardIntervalDescription:(id)arg4 displayedSkipBackwardIntervalDescription:(id)arg5;
+ (id)accessibilityValueForTransportControlWithType:(long long)arg1 withLikedState:(long long)arg2 withRepeatType:(unsigned long long)arg3 withShuffleType:(unsigned long long)arg4;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

@end

