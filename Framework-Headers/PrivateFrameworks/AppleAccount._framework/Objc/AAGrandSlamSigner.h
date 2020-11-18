//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface AAGrandSlamSigner : NSObject
{
    ACAccountStore *_accountStore;
    ACAccount *_grandSlamAccount;
    NSString *_appTokenID;
    BOOL _useAltDSID;
}

@property (readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic) ACAccount *grandSlamAccount; // @synthesize grandSlamAccount=_grandSlamAccount;
@property (nonatomic) BOOL useAltDSID; // @synthesize useAltDSID=_useAltDSID;

- (void).cxx_destruct;
- (id)initWithAccountStore:(id)arg1 grandSlamAccount:(id)arg2 appTokenID:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (BOOL)signURLRequest:(id)arg1;
- (BOOL)signURLRequest:(id)arg1 isUserInitiated:(BOOL)arg2;

@end

