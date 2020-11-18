//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallRingText : CLKComplicationTemplate
{
    float _fillFraction;
    CLKTextProvider *_textProvider;
    long long _ringStyle;
}

@property (nonatomic) float fillFraction; // @synthesize fillFraction=_fillFraction;
@property (nonatomic) long long ringStyle; // @synthesize ringStyle=_ringStyle;
@property (copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCompatibleWithFamily:(long long)arg1;

@end

