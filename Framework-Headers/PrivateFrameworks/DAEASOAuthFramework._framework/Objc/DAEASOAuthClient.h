//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DAEASOAuthClient : NSObject
{
}

+ (id)_defaultScopeWithDomainForOAuthType:(unsigned long long)arg1;
+ (id)_defaultScopeWithoutDomainForOAuthType:(unsigned long long)arg1;
+ (id)clientIDForOAuthType:(unsigned long long)arg1;
+ (id)clientRedirect;
+ (id)clientRedirectForOAuthType:(unsigned long long)arg1;
+ (id)defaultScopeForOAuthType:(unsigned long long)arg1 withResourceIdentifier:(id)arg2;
+ (id)scopeForUpgradingFromBasicCreds;

@end
