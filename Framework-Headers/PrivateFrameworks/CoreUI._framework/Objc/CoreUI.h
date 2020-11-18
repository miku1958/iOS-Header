//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CoreUI : NSObject
{
}

+ (void)_determineCompatibilityMode;
+ (BOOL)_hasDarkMenuBarForLook:(struct _themelook *)arg1;
+ (void)_invalidateVisibleWindows;
+ (BOOL)_isCurrentLook:(struct _themelook *)arg1;
+ (void)_setCurrentSystemThemeLook:(struct _themelook *)arg1;
+ (void)_setThemeLookDelegate:(id)arg1;
+ (id)_themeLookDelegate;
+ (void)_updateMenuBarDrawingStyleForLook:(struct _themelook *)arg1;
+ (void)changeToLook:(struct _themelook *)arg1;
+ (long long)currentLookGradation;
+ (struct _themelook *)currentSystemThemeLook;
+ (long long)lookCongruencyForObject:(id)arg1;
+ (long long)maximumLookGradation;

@end
