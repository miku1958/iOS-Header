//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSDate, NSError, NSNumber;

@interface HAPCharacteristicResponseTuple : HMFObject
{
    HAPCharacteristic *_characteristic;
    id _value;
    NSNumber *_stateNumber;
    NSDate *_valueUpdatedTime;
    NSError *_error;
}

@property (strong, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property (strong, nonatomic) id value; // @synthesize value=_value;
@property (strong, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;

+ (id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;

@end
