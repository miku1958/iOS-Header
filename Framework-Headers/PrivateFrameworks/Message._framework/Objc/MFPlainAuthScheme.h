//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFPlainAuthScheme : ECAuthenticationScheme
{
}

- (Class)authenticatorClass;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)humanReadableName;
- (id)name;

@end
