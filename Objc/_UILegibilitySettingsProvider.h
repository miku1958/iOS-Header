//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject
{
    BOOL _hasContrast;
    BOOL _accumulatorIsPrimed;
    double _mostRecentSaturation;
    double _accumulatedSaturation;
    double _mostRecentBrightness;
    double _accumulatedBrightness;
    UIColor *_contentColor;
    double _mostRecentContrast;
    double _accumulatedContrast;
    double _mostRecentLuminance;
    double _accumulatedLuminance;
    double _nextChangeBarrier;
    long long _currentStyle;
}

@property (nonatomic) double accumulatedBrightness; // @synthesize accumulatedBrightness=_accumulatedBrightness;
@property (nonatomic) double accumulatedContrast; // @synthesize accumulatedContrast=_accumulatedContrast;
@property (nonatomic) double accumulatedLuminance; // @synthesize accumulatedLuminance=_accumulatedLuminance;
@property (nonatomic) double accumulatedSaturation; // @synthesize accumulatedSaturation=_accumulatedSaturation;
@property (nonatomic) BOOL accumulatorIsPrimed; // @synthesize accumulatorIsPrimed=_accumulatorIsPrimed;
@property (strong, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property (nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property (nonatomic) BOOL hasContrast; // @synthesize hasContrast=_hasContrast;
@property (nonatomic) double mostRecentBrightness; // @synthesize mostRecentBrightness=_mostRecentBrightness;
@property (nonatomic) double mostRecentContrast; // @synthesize mostRecentContrast=_mostRecentContrast;
@property (nonatomic) double mostRecentLuminance; // @synthesize mostRecentLuminance=_mostRecentLuminance;
@property (nonatomic) double mostRecentSaturation; // @synthesize mostRecentSaturation=_mostRecentSaturation;
@property (nonatomic) double nextChangeBarrier; // @synthesize nextChangeBarrier=_nextChangeBarrier;

+ (long long)styleForContentColor:(id)arg1;
+ (long long)styleForContentColor:(id)arg1 contrast:(double)arg2;
- (BOOL)accumulateChangesToContentColor:(id)arg1;
- (BOOL)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2;
- (void)clearContentColorAccumulator;
- (void)dealloc;
- (id)settings;

@end

