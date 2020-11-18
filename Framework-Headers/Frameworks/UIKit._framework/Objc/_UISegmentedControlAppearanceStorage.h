//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject
{
    UIImage *_optionsBackgroundImage;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_miniBackgroundImages;
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_miniDividerImages;
    NSMutableDictionary *_textAttributesForState;
    NSMutableDictionary *_backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary *_contentPositionOffsets;
    NSMutableDictionary *_miniContentPositionOffsets;
    BOOL _legacyDontHighlight;
    BOOL _legacySuppressOptionsBackground;
    BOOL _isTiled;
    unsigned long long _leftCapWidth;
    unsigned long long _rightCapWidth;
}

@property (strong, nonatomic) UIImage *optionsBackgroundImage; // @synthesize optionsBackgroundImage=_optionsBackgroundImage;

- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(BOOL)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(BOOL)arg2 withFallback:(BOOL)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(BOOL)arg2 noFallback:(BOOL)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(BOOL)arg3 withFallback:(BOOL)arg4;
- (id)init;
- (BOOL)legacySuppressOptionsBackground;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(BOOL)arg3;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(BOOL)arg3;
- (void)setDetail:(CDStruct_41b0f204 *)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(BOOL)arg4;
- (void)setIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)takeTextAttributesFrom:(CDStruct_0ba2c6ed)arg1 forState:(unsigned long long)arg2;
- (id)textAttributesForState:(unsigned long long)arg1;
- (BOOL)wantsTrackingSuppressed;

@end

