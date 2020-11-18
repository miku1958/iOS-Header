//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

#import <ActionKit/PocketAPIDelegate-Protocol.h>

@class NSString, PocketAPI;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate>
{
    PocketAPI *_pocket;
    CDUnknownBlockType _loginHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType loginHandler; // @synthesize loginHandler=_loginHandler;
@property (strong, nonatomic) PocketAPI *pocket; // @synthesize pocket=_pocket;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (unsigned long long)globalLevelStatus;
- (void)logOut;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 requestedOpenURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pocketAPILoggedIn:(id)arg1;
- (id)pocketCallbackScheme;
- (id)protectedResourceDescription;
- (id)resourceName;
- (id)username;

@end
