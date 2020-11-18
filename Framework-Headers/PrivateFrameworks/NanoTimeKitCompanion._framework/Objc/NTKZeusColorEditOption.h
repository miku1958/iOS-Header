//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKZeusColorEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long color;

+ (id)__orderedValuesForDevice:(id)arg1;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedBeginningValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedEndingValuesRestrictedByDevice:(id)arg1;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end

