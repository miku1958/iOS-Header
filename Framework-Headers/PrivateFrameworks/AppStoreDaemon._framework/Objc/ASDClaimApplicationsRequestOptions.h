//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions
{
    BOOL _establishesActiveAccount;
    BOOL _ignoresPreviousClaimAttempts;
    BOOL _suppressErrorDialogs;
    NSNumber *_accountID;
    NSData *_clientAuditTokenData;
    NSArray *_bundleIdentifiers;
    long long _claimStyle;
    NSDictionary *_httpHeaders;
    NSNumber *_purchaseID;
}

@property (copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property (readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property (copy, nonatomic) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property (nonatomic) BOOL establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
@property (copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property (nonatomic) BOOL ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property (copy, nonatomic) NSNumber *purchaseID; // @synthesize purchaseID=_purchaseID;
@property (nonatomic) BOOL suppressErrorDialogs; // @synthesize suppressErrorDialogs=_suppressErrorDialogs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithClaimStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;

@end

