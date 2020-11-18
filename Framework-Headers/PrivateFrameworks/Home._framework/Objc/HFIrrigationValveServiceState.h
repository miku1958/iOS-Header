//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFServiceState.h>

@interface HFIrrigationValveServiceState : HFServiceState
{
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (unsigned long long)_typeForSystemActiveState:(BOOL)arg1 usageState:(long long)arg2;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
- (id)initWithBatchReadResponse:(id)arg1;
- (BOOL)isTransitioning;
- (long long)primaryState;
- (long long)priority;
- (id)stateTypeIdentifier;

@end

