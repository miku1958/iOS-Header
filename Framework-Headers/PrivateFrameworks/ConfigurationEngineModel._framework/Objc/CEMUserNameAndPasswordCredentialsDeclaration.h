//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase
{
    NSString *_payloadUserName;
    NSString *_payloadPassword;
}

@property (copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property (copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)buildWithUserName:(id)arg1 withPassword:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

