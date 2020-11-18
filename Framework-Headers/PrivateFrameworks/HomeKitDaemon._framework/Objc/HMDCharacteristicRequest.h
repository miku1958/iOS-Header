//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicRequest : NSObject
{
    HMDCharacteristic *_characteristic;
    id _previousValue;
}

@property (readonly, nonatomic) HMDCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;

+ (id)requestWithCharacteristic:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)arg1;

@end
