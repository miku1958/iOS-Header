//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueDisplayError, NSString;

@interface HFCharacteristicValueDisplayMetadata : NSObject
{
    long long _primaryState;
    long long _priority;
    NSString *_sortKey;
    HFCharacteristicValueDisplayError *_error;
    long long _transitioningPrimaryState;
}

@property (strong, nonatomic) HFCharacteristicValueDisplayError *error; // @synthesize error=_error;
@property (nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (copy, nonatomic) NSString *sortKey; // @synthesize sortKey=_sortKey;
@property (nonatomic) long long transitioningPrimaryState; // @synthesize transitioningPrimaryState=_transitioningPrimaryState;

+ (long long)_unknownStatePriorityForServiceType:(id)arg1;
+ (id)displayMetadataForBridgeAccessory:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForServiceType:(id)arg1 characteristicReadResponse:(id)arg2;
- (void).cxx_destruct;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;

@end

