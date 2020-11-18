//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CertInfo/CertInfoTrustDescription-Protocol.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust *_trust;
    int _action;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_expirationDate;
- (unsigned long long)certificateCount;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;
- (BOOL)isRootCertificate;
- (BOOL)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;

@end
