//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayTypeController, HKUnitPreferenceController;

@interface HBXUnitSupport : NSObject
{
    HKUnitPreferenceController *_unitPreferenceController;
    HKDisplayTypeController *_displayTypeController;
}

@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController; // @synthesize unitPreferenceController=_unitPreferenceController;

- (void).cxx_destruct;
- (id)initWithUnitPreferenceController:(id)arg1 displayTypeController:(id)arg2;
- (id)localizedDisplayNameForUnit:(id)arg1 nameContext:(long long)arg2;
- (id)localizedPreferredUnitDisplayNameForType:(id)arg1 nameContext:(long long)arg2;
- (id)preferredUnitForType:(id)arg1;
- (void)updatePreferredUnit:(id)arg1 forType:(id)arg2;

@end

