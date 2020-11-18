//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, NSMutableArray, NSString, NSUUID;

@interface _HDObjectAuthorizationPromptSession : NSObject
{
    HDProfile *_profile;
    NSMutableArray *_requests;
    NSMutableArray *_completions;
    BOOL _didStartTransaction;
    NSString *_bundleIdentifier;
    NSUUID *_sessionIdentifier;
    CDUnknownBlockType _sessionCompletion;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) unsigned long long requestCount;
@property (copy, nonatomic) CDUnknownBlockType sessionCompletion; // @synthesize sessionCompletion=_sessionCompletion;
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;

- (void).cxx_destruct;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addRequest:(id)arg1;
- (void)beginPromptSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)beginPromptTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (void)endPromptTransactionWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 profile:(id)arg2;
- (id)sessionDescriptor;
- (void)timeoutExpired;

@end
