//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleIDSSOAuthentication/NSCopying-Protocol.h>
#import <AppleIDSSOAuthentication/NSMutableCopying-Protocol.h>

@class NSDictionary, UIViewController;
@protocol AASignInFlowControllerDelegate, AASignOutFlowControllerDelegate, CDPStateUIProvider;

@interface AIDAServiceContext : NSObject <NSMutableCopying, NSCopying>
{
    NSDictionary *_authenticationResults;
    BOOL _shouldForceOperation;
    long long _operationUIPermissions;
    UIViewController *_viewController;
    id<AASignInFlowControllerDelegate> _aaSignInFlowControllerDelegate;
    id<AASignOutFlowControllerDelegate> _aaSignOutFlowControllerDelegate;
    NSDictionary *_signInContexts;
    NSDictionary *_signOutContexts;
    id<CDPStateUIProvider> _cdpUiProvider;
}

@property (readonly, nonatomic) id<AASignInFlowControllerDelegate> aaSignInFlowControllerDelegate; // @synthesize aaSignInFlowControllerDelegate=_aaSignInFlowControllerDelegate;
@property (readonly, nonatomic) id<AASignOutFlowControllerDelegate> aaSignOutFlowControllerDelegate; // @synthesize aaSignOutFlowControllerDelegate=_aaSignOutFlowControllerDelegate;
@property (readonly, copy, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property (readonly, weak, nonatomic) id<CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property (readonly, nonatomic) long long operationUIPermissions; // @synthesize operationUIPermissions=_operationUIPermissions;
@property (readonly, nonatomic) BOOL shouldForceOperation; // @synthesize shouldForceOperation=_shouldForceOperation;
@property (readonly, nonatomic) NSDictionary *signInContexts; // @synthesize signInContexts=_signInContexts;
@property (readonly, nonatomic) NSDictionary *signOutContexts; // @synthesize signOutContexts=_signOutContexts;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)contextWithContext:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

