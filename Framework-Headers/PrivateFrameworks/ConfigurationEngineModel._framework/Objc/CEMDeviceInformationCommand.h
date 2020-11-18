//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMDeviceInformationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *payloadQueries;
@property (readonly) Class superclass;

+ (id)ErrorResponses_ErrorResponsesItem_allowedStatusKeys;
+ (id)ErrorResponses_allowedStatusKeys;
+ (id)Queries_allowedPayloadKeys;
+ (id)QueryResponses_AutoSetupAdminAccountsItem_allowedStatusKeys;
+ (id)QueryResponses_OSUpdateSettings_allowedStatusKeys;
+ (id)QueryResponses_OrganizationInfo_allowedStatusKeys;
+ (id)QueryResponses_allowedStatusKeys;
+ (id)allowedPayloadKeys;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)registeredClass;
+ (id)registeredType;
- (int)executionLevel;
- (BOOL)mustBeSupervised;
- (id)serializePayload:(id)arg1 withAssetProviders:(id)arg2;
- (id)serializePayloadQueries:(id)arg1 withAssetProviders:(id)arg2;
- (BOOL)validPayloadDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validPayloadQueries_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)validStatusErrorResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusErrorResponses_ErrorResponsesItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_AutoSetupAdminAccountsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_OSUpdateSettings_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;
- (BOOL)validStatusQueryResponses_OrganizationInfo_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id *)arg3;

@end
