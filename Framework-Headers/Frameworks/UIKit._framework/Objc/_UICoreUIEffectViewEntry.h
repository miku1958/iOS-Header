//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _UICoreUIEffectViewEntry : _UIVisualEffectViewEntry
{
    CALayer *_materialLayer;
}

@property (strong, nonatomic) CALayer *materialLayer; // @synthesize materialLayer=_materialLayer;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (BOOL)isSameTypeOfEffect:(id)arg1;
- (void)removeEffectFromView:(id)arg1;
- (BOOL)shouldAnimateProperty:(id)arg1;

@end
