//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASAccount, ASPolicy, ASTaskManager, NSString;
@protocol ASPolicyPreflighterDelegate;

@interface ASPolicyPreflighter : NSObject
{
    BOOL _invalidated;
    ASAccount *_account;
    id<ASPolicyPreflighterDelegate> _delegate;
    id _contextInfo;
    ASPolicy *_policy;
    ASPolicy *_acknowledgedPolicy;
    NSString *_originalKey;
    ASTaskManager *_taskManager;
}

@property (weak, nonatomic) ASAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) ASPolicy *acknowledgedPolicy; // @synthesize acknowledgedPolicy=_acknowledgedPolicy;
@property (weak, nonatomic) id contextInfo; // @synthesize contextInfo=_contextInfo;
@property (weak, nonatomic) id<ASPolicyPreflighterDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (copy, nonatomic) NSString *originalKey; // @synthesize originalKey=_originalKey;
@property (strong, nonatomic) ASPolicy *policy; // @synthesize policy=_policy;
@property (strong, nonatomic) ASTaskManager *taskManager; // @synthesize taskManager=_taskManager;

- (void).cxx_destruct;
- (id)_originalKey;
- (void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(BOOL)arg1;
- (void)acknowledgeIntentionToRemoteWipe;
- (void)acknowledgePolicyCompliance;
- (void)cancelPendingPreflightRequest;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 policyKey:(id)arg2;
- (void)invalidate;
- (void)provisionTask:(id)arg1 failedWithError:(id)arg2;
- (void)provisionTask:(id)arg1 wipeRequested:(BOOL)arg2 accountOnlyRipeRequested:(BOOL)arg3 policies:(id)arg4 status:(int)arg5;
- (void)startPreflight;

@end

