//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface HFCharacteristicValueSet : NSObject
{
    NSMutableSet *_allCharacteristics;
    NSMutableDictionary *_valuesByCharacteristicUUID;
}

@property (readonly, nonatomic) NSSet *allCharacteristics; // @synthesize allCharacteristics=_allCharacteristics;

- (void).cxx_destruct;
- (id)init;
- (void)removeValueForCharacteristic:(id)arg1;
- (void)setValue:(id)arg1 forCharacteristic:(id)arg2;
- (id)valueForCharacteristic:(id)arg1;

@end
