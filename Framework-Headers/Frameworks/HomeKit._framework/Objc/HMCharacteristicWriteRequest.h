//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCharacteristicRequest.h>

@interface HMCharacteristicWriteRequest : HMCharacteristicRequest
{
    id _value;
}

@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

