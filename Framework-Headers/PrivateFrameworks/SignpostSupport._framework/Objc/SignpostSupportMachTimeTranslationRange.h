//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SignpostSupportMachTimeTranslationRange : NSObject
{
    unsigned long long _startMachAbsoluteTime;
    unsigned long long _endMachAbsoluteTime;
    unsigned long long _startMachContinuousTime;
    unsigned long long _endMachContinuousTime;
}

@property (readonly, nonatomic) long long absoluteMinusContinuousDelta;
@property (readonly, nonatomic) long long continuousMinusAbsoluteDelta;
@property (readonly, nonatomic) unsigned long long endMachAbsoluteTime; // @synthesize endMachAbsoluteTime=_endMachAbsoluteTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime; // @synthesize endMachContinuousTime=_endMachContinuousTime;
@property (readonly, nonatomic) unsigned long long machContinuousTimeDuration;
@property (readonly, nonatomic) unsigned long long startMachAbsoluteTime; // @synthesize startMachAbsoluteTime=_startMachAbsoluteTime;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime; // @synthesize startMachContinuousTime=_startMachContinuousTime;

- (BOOL)containsMachAbsoluteTime:(unsigned long long)arg1;
- (BOOL)containsMachContinuousTime:(unsigned long long)arg1;
- (id)debugDescription;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)initWithStartMachAbsoluteTime:(unsigned long long)arg1 startContinuousTime:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (id)serializableArrayRepresentation;
- (BOOL)setEndMachAbsoluteTimestamp:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;

@end

