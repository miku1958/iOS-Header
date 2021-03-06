//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoverSheet/CSRemoteContentModalViewControllerDelegate-Protocol.h>

@class CSRemoteContentModalViewController, NSString, SBSRemoteContentDefinition;
@protocol CSRemoteContentSessionHostDelegate, CSRemoteContentSessionPreferencesProvider, SBFAuthenticationStatusProvider;

@interface CSRemoteContentSession : NSObject <CSRemoteContentModalViewControllerDelegate>
{
    BOOL _activated;
    BOOL _presented;
    CSRemoteContentModalViewController *_containerViewController;
    BOOL _valid;
    id<CSRemoteContentSessionHostDelegate> _hostDelegate;
    id<CSRemoteContentSessionPreferencesProvider> _preferencesProvider;
    SBSRemoteContentDefinition *_definition;
    id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;
    NSString *_sessionID;
}

@property (readonly, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider; // @synthesize authenticationStatusProvider=_authenticationStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) SBSRemoteContentDefinition *definition; // @synthesize definition=_definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<CSRemoteContentSessionHostDelegate> hostDelegate; // @synthesize hostDelegate=_hostDelegate;
@property (weak, nonatomic) id<CSRemoteContentSessionPreferencesProvider> preferencesProvider; // @synthesize preferencesProvider=_preferencesProvider;
@property (readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (void)_activate;
- (id)_errorWithCode:(long long)arg1;
- (BOOL)_invalidateForReason:(long long)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidateWithError:(id)arg1;
- (void)_invalidateWithErrorCode:(long long)arg1;
- (void)_reactivate;
- (void)activate;
- (id)initWithDefinition:(id)arg1 authenticationStatusProvider:(id)arg2;
- (void)remoteContentModalViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteContentModalViewController:(id)arg1 didUpdateWithPreferences:(id)arg2;
- (BOOL)remoteContentModalViewController:(id)arg1 requestsDismissalForType:(long long)arg2 completion:(CDUnknownBlockType)arg3;

@end

