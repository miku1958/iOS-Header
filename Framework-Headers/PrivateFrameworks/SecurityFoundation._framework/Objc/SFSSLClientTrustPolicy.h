//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding>
{
    id _sslClientTrustPolicyInternal;
}

@property (copy, nonatomic) NSString *clientName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientName:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

