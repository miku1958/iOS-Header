//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPCharacteristicValueLinearDerivedTransition, HAPCharacteristicValueLinearTransition, HAPCharacteristicValueTransitionEndBehaviorWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPCharacteristicValueTransition : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_HAPInstanceID;
    NSData *_controllerContext;
    HAPCharacteristicValueTransitionEndBehaviorWrapper *_endBehavior;
    HAPCharacteristicValueLinearTransition *_linearTransition;
    HAPCharacteristicValueLinearDerivedTransition *_linearDerivedTransition;
    HAPTLVUnsignedNumberValue *_valueUpdateTimeInterval;
    NSData *_notifyValueChangeThreshold;
    HAPTLVUnsignedNumberValue *_notifyTimeIntervalThreshold;
}

@property (strong, nonatomic) HAPTLVUnsignedNumberValue *HAPInstanceID; // @synthesize HAPInstanceID=_HAPInstanceID;
@property (strong, nonatomic) NSData *controllerContext; // @synthesize controllerContext=_controllerContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HAPCharacteristicValueTransitionEndBehaviorWrapper *endBehavior; // @synthesize endBehavior=_endBehavior;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HAPCharacteristicValueLinearDerivedTransition *linearDerivedTransition; // @synthesize linearDerivedTransition=_linearDerivedTransition;
@property (strong, nonatomic) HAPCharacteristicValueLinearTransition *linearTransition; // @synthesize linearTransition=_linearTransition;
@property (strong, nonatomic) HAPTLVUnsignedNumberValue *notifyTimeIntervalThreshold; // @synthesize notifyTimeIntervalThreshold=_notifyTimeIntervalThreshold;
@property (strong, nonatomic) NSData *notifyValueChangeThreshold; // @synthesize notifyValueChangeThreshold=_notifyValueChangeThreshold;
@property (readonly) Class superclass;
@property (strong, nonatomic) HAPTLVUnsignedNumberValue *valueUpdateTimeInterval; // @synthesize valueUpdateTimeInterval=_valueUpdateTimeInterval;

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHAPInstanceID:(id)arg1 controllerContext:(id)arg2 endBehavior:(id)arg3 linearTransition:(id)arg4 linearDerivedTransition:(id)arg5 valueUpdateTimeInterval:(id)arg6 notifyValueChangeThreshold:(id)arg7 notifyTimeIntervalThreshold:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)serializeWithError:(id *)arg1;

@end
