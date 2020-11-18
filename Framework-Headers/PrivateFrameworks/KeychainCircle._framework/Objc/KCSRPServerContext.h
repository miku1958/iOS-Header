//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeychainCircle/KCSRPContext.h>

@class NSData;

@interface KCSRPServerContext : KCSRPContext
{
    NSData *_salt;
    NSData *_verifier;
}

@property (readonly) NSData *salt; // @synthesize salt=_salt;
@property (strong) NSData *verifier; // @synthesize verifier=_verifier;

- (void).cxx_destruct;
- (id)copyChallengeFor:(id)arg1 error:(id *)arg2;
- (id)copyConfirmationFor:(id)arg1 error:(id *)arg2;
- (id)initWithUser:(id)arg1 password:(id)arg2 digestInfo:(const struct ccdigest_info *)arg3 group:(struct ccdh_gp *)arg4 randomSource:(struct ccrng_state *)arg5;
- (id)initWithUser:(id)arg1 salt:(id)arg2 verifier:(id)arg3 digestInfo:(const struct ccdigest_info *)arg4 group:(struct ccdh_gp *)arg5 randomSource:(struct ccrng_state *)arg6;
- (BOOL)resetWithPassword:(id)arg1 error:(id *)arg2;

@end

