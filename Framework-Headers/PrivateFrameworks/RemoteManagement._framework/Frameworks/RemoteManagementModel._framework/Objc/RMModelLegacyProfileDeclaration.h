//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelConfigurationBase.h>

#import <RemoteManagementModel/RMModelRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface RMModelLegacyProfileDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>
{
    NSString *_payloadProfileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadProfileURL; // @synthesize payloadProfileURL=_payloadProfileURL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 profileURL:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 profileURL:(id)arg2;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializePayloadWithType:(short)arg1;

@end
