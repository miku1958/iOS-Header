//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_sharingInstanceIdentifier;
    NSString *_provisioningCredentialHash;
    unsigned long long _sharingStatus;
}

@property (copy, nonatomic) NSString *provisioningCredentialHash; // @synthesize provisioningCredentialHash=_provisioningCredentialHash;
@property (copy, nonatomic) NSString *sharingInstanceIdentifier; // @synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier;
@property (nonatomic) unsigned long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEncryptedProvisioningTarget:(id)arg1;

@end

