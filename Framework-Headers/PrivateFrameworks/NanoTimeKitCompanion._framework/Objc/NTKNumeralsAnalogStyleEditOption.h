//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKNumeralsAnalogStyleEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long style;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)availableOrderedValuesForDevice:(id)arg1;
+ (long long)indexForNumeralsStyle:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithStyle:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end

