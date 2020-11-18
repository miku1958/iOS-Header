//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator
{
    long long _style;
}

@property (readonly, nonatomic, getter=_impactConfiguration) _UIImpactFeedbackGeneratorConfiguration *impactConfiguration;

+ (Class)_configurationClass;
- (void)_impactOccurredWithIntensity:(double)arg1;
- (id)_stats_key;
- (id)_styleString;
- (id)_ui_descriptionBuilder;
- (void)impactOccurred;
- (void)impactOccurredWithIntensity:(double)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;

@end

