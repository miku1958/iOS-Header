//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKFaceColorEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long faceColor;

+ (id)__allOrderedColors;
+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_optionByValidatingValueOfInvalidOption:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_thirdPartyValues;
+ (id)optionByValidatingValueOfInvalidOption:(id)arg1;
+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)standardColorEditOptionsForDevice:(id)arg1;
+ (id)standardColorValuesForDevice:(id)arg1;
+ (id)standardColorsWithColorClass:(Class)arg1 forDevice:(id)arg2;
+ (BOOL)value:(long long)arg1 existsInDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (BOOL)isEqual:(id)arg1;
- (BOOL)optionExistsInDevice:(id)arg1;
- (long long)swatchStyle;

@end

