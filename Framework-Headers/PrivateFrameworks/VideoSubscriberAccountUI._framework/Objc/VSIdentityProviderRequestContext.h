//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSIdentityProviderRequest;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderRequestContext : NSObject
{
    BOOL _attemptedVerificationStateReset;
    VSIdentityProviderRequest *_request;
}

@property (nonatomic) BOOL attemptedVerificationStateReset; // @synthesize attemptedVerificationStateReset=_attemptedVerificationStateReset;
@property (strong, nonatomic) VSIdentityProviderRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;

@end

