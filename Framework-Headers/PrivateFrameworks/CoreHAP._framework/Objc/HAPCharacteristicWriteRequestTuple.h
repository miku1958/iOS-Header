//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAP2CharacteristicTupleValue-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPCharacteristic, NSData, NSNumber, NSString;

@interface HAPCharacteristicWriteRequestTuple : HMFObject <HAP2CharacteristicTupleValue, NSCopying>
{
    BOOL _timedWrite;
    BOOL _includeResponseValue;
    HAPCharacteristic *_characteristic;
    id _value;
    NSData *_authorizationData;
    unsigned long long _writeType;
    NSNumber *_enableEvents;
}

@property (strong, nonatomic) NSData *authorizationData; // @synthesize authorizationData=_authorizationData;
@property (strong, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSNumber *enableEvents; // @synthesize enableEvents=_enableEvents;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL includeResponseValue; // @synthesize includeResponseValue=_includeResponseValue;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timedWrite; // @synthesize timedWrite=_timedWrite;
@property (strong, nonatomic) id value; // @synthesize value=_value;
@property (nonatomic) unsigned long long writeType; // @synthesize writeType=_writeType;

+ (id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(BOOL)arg4 responseValue:(BOOL)arg5 type:(unsigned long long)arg6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

