//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalAccount, NSNumber;

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>
{
    BOOL _wasRelogin;
    HKClinicalAccount *_account;
    NSNumber *_alternateCredentialPersistentID;
}

@property (readonly, nonatomic) HKClinicalAccount *account; // @synthesize account=_account;
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID; // @synthesize alternateCredentialPersistentID=_alternateCredentialPersistentID;
@property (readonly, nonatomic) BOOL wasRelogin; // @synthesize wasRelogin=_wasRelogin;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1 wasRelogin:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;

@end
