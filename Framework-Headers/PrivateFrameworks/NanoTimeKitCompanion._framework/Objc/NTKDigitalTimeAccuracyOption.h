//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKDigitalTimeAccuracyOption : NTKEnumeratedEditOption
{
}

@property (readonly, nonatomic) unsigned long long accuracy;

+ (id)_nameLocalizationKeyForValue:(unsigned long long)arg1;
+ (id)_orderedValues;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1;
+ (long long)indexForAccuracy:(unsigned long long)arg1;
+ (id)optionWithAccuracy:(unsigned long long)arg1;
- (id)_valueToFaceBundleStringDict;

@end

