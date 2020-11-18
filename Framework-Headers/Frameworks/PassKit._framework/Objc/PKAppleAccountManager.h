//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject
{
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_aidaAccount;
- (id)_primaryAppleAccount;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

