//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UITintColorViewEntry : _UIVisualEffectViewEntry
{
    UIColor *_tintColor;
}

@property (copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeEffectFromView:(id)arg1;

@end

