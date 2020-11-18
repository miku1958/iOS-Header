//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation
{
    BOOL _loginDisabled;
    BOOL _passwordChangeRequired;
    BOOL _shouldShowLinkAccountsUI;
    GKPlayerCredential *_credential;
    NSURL *_passwordChangeURL;
    NSString *_alertTitle;
    NSString *_alertMessage;
}

@property (strong, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property (strong, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property (strong, nonatomic) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property (nonatomic) BOOL loginDisabled; // @synthesize loginDisabled=_loginDisabled;
@property (nonatomic) BOOL passwordChangeRequired; // @synthesize passwordChangeRequired=_passwordChangeRequired;
@property (strong, nonatomic) NSURL *passwordChangeURL; // @synthesize passwordChangeURL=_passwordChangeURL;
@property (nonatomic) BOOL shouldShowLinkAccountsUI; // @synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI;

+ (id)secureCodedPropertyKeys;
- (void)dealloc;

@end
