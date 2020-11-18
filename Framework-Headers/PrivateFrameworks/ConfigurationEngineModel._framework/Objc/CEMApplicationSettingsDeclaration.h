//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *payloadAllowActivityContinuation;
@property (readonly, nonatomic) NSNumber *payloadAllowAppCellularDataModification;
@property (readonly, nonatomic) NSNumber *payloadAllowDiagnosticSubmission;
@property (readonly, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification;
@property (readonly, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust;
@property (readonly, nonatomic) NSNumber *payloadAppAnalytics;
@property (readonly, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs;
@property (readonly, nonatomic) NSNumber *payloadDiagnosticSubmission;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)profileType;
+ (id)registeredClass;
+ (id)registeredType;
+ (id)restrictionPayloadKeys;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)mustBeSupervised;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;

@end
