//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKAnalogDialShapeEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long dialShape;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithShape:(unsigned long long)arg1 forDevice:(id)arg2;
- (unsigned long long)_value;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end

