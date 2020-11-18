//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject
{
    BOOL _timedWrite;
    BOOL _writeResponse;
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
    NSNumber *_enableEvents;
}

@property (strong, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property (strong, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (strong, nonatomic) NSNumber *enableEvents; // @synthesize enableEvents=_enableEvents;
@property (nonatomic) BOOL timedWrite; // @synthesize timedWrite=_timedWrite;
@property (strong, nonatomic) id value; // @synthesize value=_value;
@property (nonatomic) BOOL writeResponse; // @synthesize writeResponse=_writeResponse;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(BOOL)arg4;
- (void).cxx_destruct;

@end
