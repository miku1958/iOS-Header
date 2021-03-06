//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAssetBaseDescriptor : CEMPayloadBase
{
    NSString *_payloadTitle;
    NSString *_payloadDescription;
}

@property (copy, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property (copy, nonatomic) NSString *payloadTitle; // @synthesize payloadTitle=_payloadTitle;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithTitle:(id)arg1;
+ (id)buildWithTitle:(id)arg1 withDescription:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

