//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long victoryColor;

+ (id)_localizedNameForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (id)optionWithVictoryColor:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;
- (BOOL)optionExistsInOSVersion:(unsigned int)arg1;
- (long long)swatchStyle;

@end

