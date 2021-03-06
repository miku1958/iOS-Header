//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface PKAuthenticatorEvaluationRequest : NSObject
{
    BOOL _useStockAuthInterface;
    BOOL _hasInitialAuthenticatorState;
    BOOL _assumeUserIntentAvailable;
    long long _policy;
    NSString *_reason;
    NSString *_processName;
    NSNumber *_processIdentifier;
    NSString *_PINTitle;
    NSNumber *_PINLength;
    NSData *_externalizedContext;
    struct __SecAccessControl *_accessControlRef;
    NSString *_physicalButtonTitle;
    NSString *_passcodeTitle;
    unsigned long long _initialAuthenticatorState;
}

@property (copy, nonatomic) NSNumber *PINLength; // @synthesize PINLength=_PINLength;
@property (copy, nonatomic) NSString *PINTitle; // @synthesize PINTitle=_PINTitle;
@property (nonatomic) struct __SecAccessControl *accessControlRef; // @synthesize accessControlRef=_accessControlRef;
@property (nonatomic) BOOL assumeUserIntentAvailable; // @synthesize assumeUserIntentAvailable=_assumeUserIntentAvailable;
@property (strong, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property (nonatomic) BOOL hasInitialAuthenticatorState; // @synthesize hasInitialAuthenticatorState=_hasInitialAuthenticatorState;
@property (nonatomic) unsigned long long initialAuthenticatorState; // @synthesize initialAuthenticatorState=_initialAuthenticatorState;
@property (copy, nonatomic) NSString *passcodeTitle; // @synthesize passcodeTitle=_passcodeTitle;
@property (copy, nonatomic) NSString *physicalButtonTitle; // @synthesize physicalButtonTitle=_physicalButtonTitle;
@property (readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property (copy, nonatomic) NSNumber *processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property (copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (nonatomic) BOOL useStockAuthInterface; // @synthesize useStockAuthInterface=_useStockAuthInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPolicy:(long long)arg1;

@end

