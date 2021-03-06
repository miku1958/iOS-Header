//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextComplicationView.h>

@class UIColor;

@interface NTKUpNextBezelComplicationView : NTKUpNextComplicationView
{
    double _bezelLabelCircularRadius;
    long long _theme;
    UIColor *_bezelTextColor;
}

@property (readonly, nonatomic) double bezelLabelCircularRadius; // @synthesize bezelLabelCircularRadius=_bezelLabelCircularRadius;
@property (readonly, nonatomic) UIColor *bezelTextColor; // @synthesize bezelTextColor=_bezelTextColor;
@property (readonly, nonatomic) double currentBezelTextWidth;
@property (readonly, nonatomic) long long theme; // @synthesize theme=_theme;

- (void).cxx_destruct;
- (void)_enumerateBezelViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_setView:(id)arg1 forSideAtIndex:(long long)arg2;
- (void)setBezelLabelCircularRadius:(double)arg1;
- (void)setBezelTextColor:(id)arg1;
- (void)setTheme:(long long)arg1;

@end

