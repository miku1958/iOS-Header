//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSNumber, NSString;

@interface RMModelAccountMailDeclaration_OutgoingServer : RMModelPayloadBase
{
    NSString *_payloadHostName;
    NSNumber *_payloadPort;
    NSString *_payloadAuthenticationMethod;
    NSString *_payloadAuthenticationCredentialsAssetReference;
}

@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference; // @synthesize payloadAuthenticationCredentialsAssetReference=_payloadAuthenticationCredentialsAssetReference;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod; // @synthesize payloadAuthenticationMethod=_payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadHostName; // @synthesize payloadHostName=_payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithHostName:(id)arg1 authenticationMethod:(id)arg2;
+ (id)buildWithHostName:(id)arg1 port:(id)arg2 authenticationMethod:(id)arg3 authenticationCredentialsAssetReference:(id)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id *)arg3;
- (id)serializeWithType:(short)arg1;

@end

