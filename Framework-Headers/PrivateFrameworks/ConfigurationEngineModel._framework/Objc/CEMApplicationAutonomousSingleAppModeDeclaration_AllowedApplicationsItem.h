//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase
{
    NSString *_payloadBundleIdentifier;
    NSString *_payloadTeamIdentifier;
}

@property (copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadTeamIdentifier; // @synthesize payloadTeamIdentifier=_payloadTeamIdentifier;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;
+ (id)buildWithBundleIdentifier:(id)arg1 withTeamIdentifier:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
