//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSString;

@interface CEMActivationAdvancedDeclaration_ConfigurationsItem : CEMPayloadBase
{
    NSString *_payloadIdentifier;
    CEMAnyPayload *_payloadOverrides;
}

@property (copy, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property (copy, nonatomic) CEMAnyPayload *payloadOverrides; // @synthesize payloadOverrides=_payloadOverrides;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOverrides:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
