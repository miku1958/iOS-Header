//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMCharacteristic;

@interface HMCharacteristicWriteRequestTuple : NSObject
{
    HMCharacteristic *_characteristic;
    id _value;
}

@property (readonly, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (id)tupleWithCharacteristic:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;

@end

