//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSArray, NSString, NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceApplyRequest : PKApplyWebServiceRequest
{
    NSString *_applicationIdentifier;
    unsigned long long _featureIdentifier;
    NSArray *_certificates;
    NSURL *_baseURL;
    NSString *_coreIDVNextStepToken;
    NSString *_previousContextIdentifier;
    NSString *_actionIdentifier;
    PKPaymentInstallmentConfiguration *_installmentConfiguration;
}

@property (copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property (copy, nonatomic) NSString *coreIDVNextStepToken; // @synthesize coreIDVNextStepToken=_coreIDVNextStepToken;
@property (nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property (strong, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration; // @synthesize installmentConfiguration=_installmentConfiguration;
@property (copy, nonatomic) NSString *previousContextIdentifier; // @synthesize previousContextIdentifier=_previousContextIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
