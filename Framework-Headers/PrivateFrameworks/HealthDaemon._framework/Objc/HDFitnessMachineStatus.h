//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic
{
    unsigned long long _machineState;
}

@property (nonatomic) unsigned long long machineState; // @synthesize machineState=_machineState;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)uuid;
- (id)description;

@end

