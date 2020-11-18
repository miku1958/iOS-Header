//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (ContactsFoundation)

@property (copy, nonatomic) NSString *_cn_altDSID;
@property (readonly, copy, nonatomic) NSString *_cn_appleAccountAppleID;
@property (readonly, copy, nonatomic) NSArray *_cn_appleAccountAppleIDAliases;
@property (copy, nonatomic) NSString *_cn_appleID;
@property (copy, nonatomic) NSNumber *_cn_dsid;
@property (copy, nonatomic) NSString *_cn_firstName;
@property (readonly, nonatomic) BOOL _cn_isCardDAV;
@property (readonly, nonatomic) BOOL _cn_isChildDelegateAccount;
@property (readonly, nonatomic) BOOL _cn_isLDAP;
@property (readonly, nonatomic) BOOL _cn_isManaged;
@property (readonly, nonatomic) BOOL _cn_isPrimaryAccount;
@property (copy, nonatomic) NSString *_cn_lastName;
@property (copy, nonatomic) NSString *_cn_principalPath;

- (void)setPropertiesFromDelegateInfo:(id)arg1;
@end
