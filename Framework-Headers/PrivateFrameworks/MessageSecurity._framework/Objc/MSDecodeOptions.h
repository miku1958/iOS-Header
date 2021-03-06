//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject
{
    BOOL _verifySignatures;
    BOOL _verifySigners;
    NSArray *_signerPolicies;
    NSDate *_verifyTime;
    struct __SecIdentity *_identity;
    NSData *_key;
    NSData *_LAContext;
}

@property (strong) NSData *LAContext; // @synthesize LAContext=_LAContext;
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property (strong) NSData *key; // @synthesize key=_key;
@property (strong) NSArray *signerPolicies; // @synthesize signerPolicies=_signerPolicies;
@property BOOL verifySignatures; // @synthesize verifySignatures=_verifySignatures;
@property BOOL verifySigners; // @synthesize verifySigners=_verifySigners;
@property (strong) NSDate *verifyTime; // @synthesize verifyTime=_verifyTime;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDecryptionIdentity:(struct __SecIdentity *)arg1;
- (id)initWithDecryptionKey:(id)arg1;

@end

