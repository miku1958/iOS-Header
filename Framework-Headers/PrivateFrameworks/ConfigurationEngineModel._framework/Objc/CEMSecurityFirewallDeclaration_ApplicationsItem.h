//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase
{
    NSString *_payloadApplication;
    NSNumber *_payloadAllowed;
    NSString *_payloadBundleID;
}

@property (copy, nonatomic) NSNumber *payloadAllowed; // @synthesize payloadAllowed=_payloadAllowed;
@property (copy, nonatomic) NSString *payloadApplication; // @synthesize payloadApplication=_payloadApplication;
@property (copy, nonatomic) NSString *payloadBundleID; // @synthesize payloadBundleID=_payloadBundleID;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
+ (id)buildWithApplication:(id)arg1 withAllowed:(id)arg2 withBundleID:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

