//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UITabBarBehaviorSettings : PTSettings
{
    double _stackedLeadingPadding;
    double _stackedTrailingPadding;
    double _stackedTopInset;
    double _stackedBottomInset;
    double _stackedCornerRadius;
    double _inlineLeadingPadding;
    double _inlineTrailingPadding;
    double _inlineTopInset;
    double _inlineBottomInset;
    double _inlineCornerRadius;
    double _inlineHomeButtonVerticalOffset;
    double _inlineHomeAffordanceVerticalOffset;
}

@property (nonatomic) double inlineBottomInset; // @synthesize inlineBottomInset=_inlineBottomInset;
@property (nonatomic) double inlineCornerRadius; // @synthesize inlineCornerRadius=_inlineCornerRadius;
@property (nonatomic) double inlineHomeAffordanceVerticalOffset; // @synthesize inlineHomeAffordanceVerticalOffset=_inlineHomeAffordanceVerticalOffset;
@property (nonatomic) double inlineHomeButtonVerticalOffset; // @synthesize inlineHomeButtonVerticalOffset=_inlineHomeButtonVerticalOffset;
@property (nonatomic) double inlineLeadingPadding; // @synthesize inlineLeadingPadding=_inlineLeadingPadding;
@property (nonatomic) double inlineTopInset; // @synthesize inlineTopInset=_inlineTopInset;
@property (nonatomic) double inlineTrailingPadding; // @synthesize inlineTrailingPadding=_inlineTrailingPadding;
@property (nonatomic) double stackedBottomInset; // @synthesize stackedBottomInset=_stackedBottomInset;
@property (nonatomic) double stackedCornerRadius; // @synthesize stackedCornerRadius=_stackedCornerRadius;
@property (nonatomic) double stackedLeadingPadding; // @synthesize stackedLeadingPadding=_stackedLeadingPadding;
@property (nonatomic) double stackedTopInset; // @synthesize stackedTopInset=_stackedTopInset;
@property (nonatomic) double stackedTrailingPadding; // @synthesize stackedTrailingPadding=_stackedTrailingPadding;

+ (id)settingsControllerModule;
- (void)setDefaultValues;

@end

