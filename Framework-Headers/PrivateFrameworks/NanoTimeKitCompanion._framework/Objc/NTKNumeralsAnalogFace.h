//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKNumeralsAnalogFace : NTKFace
{
}

+ (id)_complicationSlotDescriptors;
+ (id)_customEditModes;
+ (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
+ (id)_defaultSelectedComplicationSlot;
- (id)_complicationMigrationPaths;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;
- (void)_handleLocaleNumberSystemChange;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (BOOL)_option:(id)arg1 migratesToValidOption:(id *)arg2 forCustomEditMode:(long long)arg3;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
