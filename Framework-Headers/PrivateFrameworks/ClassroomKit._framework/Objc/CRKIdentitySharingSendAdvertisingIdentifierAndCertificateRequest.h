//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATTaskRequest.h>

@class NSData, NSSet, NSUUID;

@interface CRKIdentitySharingSendAdvertisingIdentifierAndCertificateRequest : CATTaskRequest
{
    NSSet *_recipients;
    NSUUID *_advertisingIdentifier;
    NSData *_activeCertificateData;
    NSData *_stagedCertificateData;
}

@property (strong, nonatomic) NSData *activeCertificateData; // @synthesize activeCertificateData=_activeCertificateData;
@property (strong, nonatomic) NSUUID *advertisingIdentifier; // @synthesize advertisingIdentifier=_advertisingIdentifier;
@property (strong, nonatomic) NSSet *recipients; // @synthesize recipients=_recipients;
@property (strong, nonatomic) NSData *stagedCertificateData; // @synthesize stagedCertificateData=_stagedCertificateData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
