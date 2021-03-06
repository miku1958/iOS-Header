//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSLock, NSMutableDictionary, NSString, SSAuthenticationContext, SSPaymentSheet;

@interface ISDialog : NSObject <SSXPCCoding>
{
    BOOL _allowDuplicates;
    SSAuthenticationContext *_authenticationContext;
    BOOL _authorizationIsForced;
    NSArray *_buttons;
    long long _defaultButtonIndex;
    NSString *_displayCountKey;
    BOOL _dismissOnHomeButton;
    BOOL _dismissOnLock;
    BOOL _expectsResponse;
    BOOL _groupsTextFields;
    long long _kind;
    NSLock *_lock;
    long long _maxDisplayCount;
    NSString *_message;
    BOOL _noDefaultButton;
    BOOL _oneButtonPerLine;
    BOOL _shouldDismissAfterUnlock;
    BOOL _shouldDisplayAsTopMost;
    BOOL _shouldPendInSetupIfNotAllowed;
    NSArray *_textFields;
    NSString *_title;
    long long _unlockActionButtonIndex;
    NSMutableDictionary *_userInfo;
    struct __CFDictionary *_userNotificationValues;
    BOOL _displaysOnLockscreen;
    SSPaymentSheet *_paymentSheet;
    NSString *_touchIDContinueToken;
}

@property BOOL allowDuplicates; // @synthesize allowDuplicates=_allowDuplicates;
@property (copy) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property BOOL authorizationIsForced; // @synthesize authorizationIsForced=_authorizationIsForced;
@property (strong) NSArray *buttons; // @synthesize buttons=_buttons;
@property (readonly, copy) NSString *debugDescription;
@property long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property (readonly, copy) NSString *description;
@property BOOL dismissOnHomeButton; // @synthesize dismissOnHomeButton=_dismissOnHomeButton;
@property BOOL dismissOnLock; // @synthesize dismissOnLock=_dismissOnLock;
@property (copy) NSString *displayCountKey;
@property (readonly, getter=isDisplayable) BOOL displayable;
@property BOOL displaysOnLockscreen; // @synthesize displaysOnLockscreen=_displaysOnLockscreen;
@property BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property BOOL groupsTextFields; // @synthesize groupsTextFields=_groupsTextFields;
@property (readonly) unsigned long long hash;
@property long long kind; // @synthesize kind=_kind;
@property long long maximumDisplayCount;
@property (strong) NSString *message; // @synthesize message=_message;
@property BOOL noDefaultButton; // @synthesize noDefaultButton=_noDefaultButton;
@property BOOL oneButtonPerLine; // @synthesize oneButtonPerLine=_oneButtonPerLine;
@property (readonly) SSPaymentSheet *paymentSheet; // @synthesize paymentSheet=_paymentSheet;
@property BOOL shouldDismissAfterUnlock; // @synthesize shouldDismissAfterUnlock=_shouldDismissAfterUnlock;
@property BOOL shouldDisplayAsTopMost; // @synthesize shouldDisplayAsTopMost=_shouldDisplayAsTopMost;
@property BOOL shouldPendInSetupIfNotAllowed; // @synthesize shouldPendInSetupIfNotAllowed=_shouldPendInSetupIfNotAllowed;
@property (readonly) Class superclass;
@property (strong) NSArray *textFields; // @synthesize textFields=_textFields;
@property (strong) NSString *title; // @synthesize title=_title;
@property (copy) NSString *touchIDContinueToken; // @synthesize touchIDContinueToken=_touchIDContinueToken;
@property long long unlockActionButtonIndex; // @synthesize unlockActionButtonIndex=_unlockActionButtonIndex;

+ (void)_initializeStaticButtonTitleKeyAndTagMapping;
+ (unsigned long long)buttonTagForCFUserNotificationButtonTitleKey:(struct __CFString *)arg1;
+ (struct __CFString *)buttonTitleKeyForCFUserNotificationButtonTag:(unsigned long long)arg1;
+ (long long)displayCountForKey:(id)arg1;
- (void).cxx_destruct;
- (long long)_kindForString:(id)arg1;
- (id)buyParams;
- (id)copyUserNotification;
- (void *)copyValueForCFUserNotificationKey:(struct __CFString *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)incrementDisplayCount;
- (id)init;
- (id)initWithAuthenticationChallege:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1 authenticationContext:(id)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithOfferDeviceError:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)orderedButtonTitleKeysForCFUserNotification;
- (void)setButtonsWithTitles:(id)arg1;
- (void)setValue:(void *)arg1 forCFUserNotificationKey:(struct __CFString *)arg2;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (id)valueForUserInfoKey:(id)arg1;

@end

