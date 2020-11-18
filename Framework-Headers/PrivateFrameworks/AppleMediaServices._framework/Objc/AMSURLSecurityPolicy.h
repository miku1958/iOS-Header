//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface AMSURLSecurityPolicy : NSObject
{
    long long _trustMode;
    NSSet *_pinnedCertificates;
}

@property (strong, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property (nonatomic) long long trustMode; // @synthesize trustMode=_trustMode;

+ (id)defaultPolicy;
- (void).cxx_destruct;
- (BOOL)_evaluateExtendedValidationWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (BOOL)_evaluatePinnedCertificatesWithTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (BOOL)_shouldSkipValidation;
- (BOOL)evaluateTrust:(struct __SecTrust *)arg1 forTask:(id)arg2;
- (id)initWithTrustMode:(long long)arg1;
- (id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2;

@end

