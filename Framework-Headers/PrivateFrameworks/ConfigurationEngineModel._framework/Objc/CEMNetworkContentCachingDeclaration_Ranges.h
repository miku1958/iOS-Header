//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase
{
    NSString *_payloadType;
    NSString *_payloadFirst;
    NSString *_payloadLast;
}

@property (copy, nonatomic) NSString *payloadFirst; // @synthesize payloadFirst=_payloadFirst;
@property (copy, nonatomic) NSString *payloadLast; // @synthesize payloadLast=_payloadLast;
@property (copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithFirst:(id)arg1 withLast:(id)arg2;
+ (id)buildWithType:(id)arg1 withFirst:(id)arg2 withLast:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
