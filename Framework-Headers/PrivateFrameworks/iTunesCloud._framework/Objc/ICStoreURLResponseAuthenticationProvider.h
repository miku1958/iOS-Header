//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

