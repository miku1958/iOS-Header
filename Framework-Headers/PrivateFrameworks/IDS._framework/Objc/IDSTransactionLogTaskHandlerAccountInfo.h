//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENAccountIdentity, NSDictionary, NSString;

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject
{
    ENAccountIdentity *_accountIdentity;
    NSDictionary *_aliasToAccountsMap;
    NSString *_serviceName;
}

@property (readonly, nonatomic) ENAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property (readonly, nonatomic) NSDictionary *aliasToAccountsMap; // @synthesize aliasToAccountsMap=_aliasToAccountsMap;
@property (readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void).cxx_destruct;
- (id)accountForAlias:(id)arg1;
- (id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3;

@end

