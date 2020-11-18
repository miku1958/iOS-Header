//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AASetupAssistantService, ACAccountStore, NSArray, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_source;

@interface AADelegateAccountSetupHelper : NSObject
{
    ACAccountStore *_accountStore;
    AASetupAssistantService *_aaService;
    NSArray *_delegatesToSetup;
    NSMutableArray *_pendingCompletionBundles;
    NSMutableDictionary *_assistantDelegates;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_source> *_delegatetimer;
}

- (void).cxx_destruct;
- (id)_adjustResponseDictionary:(id)arg1;
- (id)_loadAssistantDelegateBundles;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(CDUnknownBlockType)arg4;

@end

