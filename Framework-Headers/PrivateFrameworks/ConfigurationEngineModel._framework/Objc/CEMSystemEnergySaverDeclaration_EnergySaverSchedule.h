//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSystemEnergySaverDeclaration_RepeatingPowerItem;

@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase
{
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem *_payloadRepeatingPowerOn;
    CEMSystemEnergySaverDeclaration_RepeatingPowerItem *_payloadRepeatingPowerOff;
}

@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOff; // @synthesize payloadRepeatingPowerOff=_payloadRepeatingPowerOff;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem *payloadRepeatingPowerOn; // @synthesize payloadRepeatingPowerOn=_payloadRepeatingPowerOn;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRepeatingPowerOn:(id)arg1 withRepeatingPowerOff:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

