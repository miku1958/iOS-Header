//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECAuthScheme.h>

@interface ECAppleTokenAuthScheme : ECAuthScheme
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)appleTokenAuthScheme;
- (unsigned int)applescriptScheme;
- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)supportedSASLMechanisms;

@end

