//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount;

@interface AMSAuthKitUpdateResult : NSObject
{
    ACAccount *_account;
    unsigned long long _credentialSource;
}

@property (readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 credentialSource:(unsigned long long)arg2;

@end

