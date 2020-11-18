//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/NSSecureCoding-Protocol.h>

@class NSURL, SSBLookupResult, _SFSecurityManager;

@interface _SFSecurityInfo : NSObject <NSSecureCoding>
{
    _SFSecurityManager *_securityManager;
    BOOL _hasWarnedUser;
    NSURL *_assessedURL;
    SSBLookupResult *_result;
}

@property (strong, nonatomic) NSURL *assessedURL; // @synthesize assessedURL=_assessedURL;
@property (nonatomic) BOOL hasWarnedUser; // @synthesize hasWarnedUser=_hasWarnedUser;
@property (copy, nonatomic) SSBLookupResult *result; // @synthesize result=_result;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_providerFromSSBProvider:(id)arg1;
- (long long)_securityAssessmentFromServiceLookupResult:(id)arg1;
- (id)_securityManager;
- (id)_securityTypeDescriptionFromSecurityAssessment:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 result:(id)arg2 hasWarnedUser:(BOOL)arg3;
- (BOOL)isKnownToBeUnsafe;
- (id)provider;
- (id)securityTypeDescription;

@end

