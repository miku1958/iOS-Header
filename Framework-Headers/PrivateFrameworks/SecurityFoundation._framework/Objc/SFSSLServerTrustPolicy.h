//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFTrustPolicy.h>

#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding>
{
    id _sslServerTrustPolicyInternal;
}

@property (copy, nonatomic) NSString *serverName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerName:(id)arg1;

@end
