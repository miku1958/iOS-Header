//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSString;

@interface ACAccount (AppleAccountInternal)

@property (copy, nonatomic, setter=_aa_setRawPassword:) NSString *_aa_rawPassword;

- (void)_aa_clearRawPassword;
- (void)_aa_setAltDSID:(id)arg1;
- (void)_aa_setAppleID:(id)arg1;
- (void)aa_configureCerts;
- (void)aa_removeCerts;
@end
