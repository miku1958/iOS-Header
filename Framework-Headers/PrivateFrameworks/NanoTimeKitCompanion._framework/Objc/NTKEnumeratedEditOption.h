//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption
{
}

@property (readonly, nonatomic) unsigned long long _value; // @dynamic _value;

+ (id)_orderedValues;
+ (id)_orderedValuesRestrictedByCurrentDeviceCollection;
+ (BOOL)_valueIsValid:(unsigned long long)arg1;
+ (unsigned long long)indexOfOption:(id)arg1;
+ (unsigned long long)numberOfOptions;
+ (id)optionAtIndex:(unsigned long long)arg1;
+ (id)optionsRestrictedByCurrentDeviceCollection;

@end

