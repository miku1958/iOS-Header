//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/AIDAAccountManagerDelegate-Protocol.h>

@class ACAccountStore, AIDAAccountManager, NSString;

__attribute__((visibility("hidden")))
@interface VUIFamilyInviteManager : NSObject <AIDAAccountManagerDelegate>
{
    ACAccountStore *_store;
    AIDAAccountManager *_accountManager;
}

@property (readonly, nonatomic) AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ACAccountStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountsForAccountManager:(id)arg1;
- (id)init;
- (void)presentFamilySetupScreenIfEligible:(id)arg1 checkEligibility:(BOOL)arg2;
- (void)presentFamilySetupScreenWithBuyParams:(id)arg1;

@end

