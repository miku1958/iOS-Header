//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewColorEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;
    UIColor *_color;
    double _alpha;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (id)description;
- (void)removeEffectFromView:(id)arg1;

@end

