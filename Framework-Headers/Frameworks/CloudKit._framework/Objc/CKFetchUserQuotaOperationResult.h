//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationResult.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding>
{
    unsigned long long _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;

+ (BOOL)supportsSecureCoding;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
