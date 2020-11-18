//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServiceFetchMyCertificatesTaskResultObject : CATTaskResultObject
{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

@property (copy, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate; // @synthesize activeMarkedCertificate=_activeMarkedCertificate;
@property (copy, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate; // @synthesize stagedMarkedCertificate=_stagedMarkedCertificate;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
