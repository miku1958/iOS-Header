//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIAppearance.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UITraitBasedAppearance : _UIAppearance
{
    UITraitCollection *_traitCollection;
}

+ (id)_appearanceForTraitCollection:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (BOOL)_hasAnyCustomizations;
+ (BOOL)_hasCustomizationsForTraitCollection:(id)arg1 class:(Class)arg2 guideClass:(Class)arg3;
+ (void)_setHasAnyCustomizations;
- (void)_invalidateAppearanceInWindow:(id)arg1;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)arg1;
- (id)_traitCollection;
- (void)dealloc;

@end

