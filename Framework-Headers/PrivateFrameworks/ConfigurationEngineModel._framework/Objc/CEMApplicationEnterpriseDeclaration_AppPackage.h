//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber, NSString;

@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase
{
    NSString *_payloadDataURL;
    NSString *_payloadContentType;
    NSNumber *_payloadSize;
    NSString *_payloadHashSHA256;
    NSArray *_payloadCertificatePinningIdentifiers;
}

@property (copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers; // @synthesize payloadCertificatePinningIdentifiers=_payloadCertificatePinningIdentifiers;
@property (copy, nonatomic) NSString *payloadContentType; // @synthesize payloadContentType=_payloadContentType;
@property (copy, nonatomic) NSString *payloadDataURL; // @synthesize payloadDataURL=_payloadDataURL;
@property (copy, nonatomic) NSString *payloadHashSHA256; // @synthesize payloadHashSHA256=_payloadHashSHA256;
@property (copy, nonatomic) NSNumber *payloadSize; // @synthesize payloadSize=_payloadSize;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4;
+ (id)buildWithDataURL:(id)arg1 withContentType:(id)arg2 withSize:(id)arg3 withHashSHA256:(id)arg4 withCertificatePinningIdentifiers:(id)arg5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
