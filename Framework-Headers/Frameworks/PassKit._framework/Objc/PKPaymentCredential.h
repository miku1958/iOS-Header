//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PKPaymentEligibilityResponse, PKPaymentRequirementsResponse;

@interface PKPaymentCredential : NSObject
{
    long long _credentialType;
    NSString *_sanitizedPrimaryAccountNumber;
    NSString *_expiration;
    NSString *_longDescription;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
}

@property (nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property (strong, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property (copy, nonatomic) NSString *expiration; // @synthesize expiration=_expiration;
@property (copy, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property (strong, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber; // @synthesize sanitizedPrimaryAccountNumber=_sanitizedPrimaryAccountNumber;

- (void)dealloc;
- (BOOL)isLocalPassCredential;
- (BOOL)isRemoteCredential;
- (id)localPassCredential;
- (id)remoteCredential;

@end

