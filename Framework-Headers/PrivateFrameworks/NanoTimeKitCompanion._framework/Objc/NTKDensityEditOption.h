//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKDensityEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long density;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithDensity:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end
