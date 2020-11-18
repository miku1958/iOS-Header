//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMSystemEnergySaverDeclaration_EnergySaverSchedule, CEMSystemEnergySaverDeclaration_PowerSettings, NSNumber, NSString;

@interface CEMSystemEnergySaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverdesktopACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableACPower;
    CEMSystemEnergySaverDeclaration_PowerSettings *_payloadComappleEnergySaverportableBatteryPower;
    CEMSystemEnergySaverDeclaration_EnergySaverSchedule *_payloadComappleEnergySaverdesktopSchedule;
    NSNumber *_payloadSleepDisabled;
    NSNumber *_payloadDestroyFVKeyOnStandby;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverdesktopACPower; // @synthesize payloadComappleEnergySaverdesktopACPower=_payloadComappleEnergySaverdesktopACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_EnergySaverSchedule *payloadComappleEnergySaverdesktopSchedule; // @synthesize payloadComappleEnergySaverdesktopSchedule=_payloadComappleEnergySaverdesktopSchedule;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableACPower; // @synthesize payloadComappleEnergySaverportableACPower=_payloadComappleEnergySaverportableACPower;
@property (copy, nonatomic) CEMSystemEnergySaverDeclaration_PowerSettings *payloadComappleEnergySaverportableBatteryPower; // @synthesize payloadComappleEnergySaverportableBatteryPower=_payloadComappleEnergySaverportableBatteryPower;
@property (copy, nonatomic) NSNumber *payloadDestroyFVKeyOnStandby; // @synthesize payloadDestroyFVKeyOnStandby=_payloadDestroyFVKeyOnStandby;
@property (copy, nonatomic) NSNumber *payloadSleepDisabled; // @synthesize payloadSleepDisabled=_payloadSleepDisabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withComappleEnergySaverdesktopACPower:(id)arg2 withComappleEnergySaverportableACPower:(id)arg3 withComappleEnergySaverportableBatteryPower:(id)arg4 withComappleEnergySaverdesktopSchedule:(id)arg5 withSleepDisabled:(id)arg6 withDestroyFVKeyOnStandby:(id)arg7;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
