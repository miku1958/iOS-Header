//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface PKAuthenticatorEvaluationResponse : NSObject
{
    BOOL _biometricMatch;
    long long _result;
    NSString *_kextBlacklistVersion;
    NSData *_credential;
}

@property (readonly, nonatomic) BOOL biometricMatch; // @synthesize biometricMatch=_biometricMatch;
@property (readonly, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property (copy, nonatomic) NSString *kextBlacklistVersion; // @synthesize kextBlacklistVersion=_kextBlacklistVersion;
@property (readonly, nonatomic) long long result; // @synthesize result=_result;

+ (id)responseWithResult:(long long)arg1;
+ (id)responseWithResult:(long long)arg1 biometricMatch:(BOOL)arg2 credential:(id)arg3;
- (void).cxx_destruct;

@end

