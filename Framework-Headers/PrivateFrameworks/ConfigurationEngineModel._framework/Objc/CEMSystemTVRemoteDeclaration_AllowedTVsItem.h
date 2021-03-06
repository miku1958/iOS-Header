//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedTVsItem : CEMPayloadBase
{
    NSString *_payloadTVDeviceID;
}

@property (copy, nonatomic) NSString *payloadTVDeviceID; // @synthesize payloadTVDeviceID=_payloadTVDeviceID;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithTVDeviceID:(id)arg1;
+ (id)buildWithTVDeviceID:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

