//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECAccount.h>

@interface ECSMTPAccount : ECAccount
{
}

+ (id)standardPorts;
+ (id)standardSSLPorts;
- (id)_hostnameFromParentAccount:(id)arg1;
- (long long)defaultPortNumber;
- (id)portNumberObject;
- (id)usesSSLObject;

@end

