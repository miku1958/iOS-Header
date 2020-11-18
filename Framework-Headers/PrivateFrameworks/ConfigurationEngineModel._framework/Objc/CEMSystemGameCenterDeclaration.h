//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowGameCenter;
    NSNumber *_payloadAllowMultiplayerGaming;
    NSNumber *_payloadAllowAddingGameCenterFriends;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *payloadAllowAddingGameCenterFriends; // @synthesize payloadAllowAddingGameCenterFriends=_payloadAllowAddingGameCenterFriends;
@property (copy, nonatomic) NSNumber *payloadAllowGameCenter; // @synthesize payloadAllowGameCenter=_payloadAllowGameCenter;
@property (copy, nonatomic) NSNumber *payloadAllowMultiplayerGaming; // @synthesize payloadAllowMultiplayerGaming=_payloadAllowMultiplayerGaming;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4;
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
