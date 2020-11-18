//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSArray, NSDictionary, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, NSSecureCoding>
{
    NSString *_generatedCode;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    struct __CFUserNotification *_activeSecondFactoryEntryPrompt;
    CDUnknownBlockType _secondFactoryEntryCompletion;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    BOOL _isProxyingForApp;
    BOOL _isPasswordEditable;
    BOOL _isUsernameEditable;
    BOOL _shouldAllowAppleIDCreation;
    BOOL _needsCredentialRecovery;
    BOOL _needsNewAppleID;
    BOOL _needsPasswordChange;
    BOOL _isTriggeredByNotification;
    BOOL _isEphemeral;
    BOOL _shouldOfferSecurityUpgrade;
    BOOL _shouldPromptForPasswordOnly;
    BOOL _shouldUpdatePersistentServiceTokens;
    BOOL _shouldPreventInteractiveAuth;
    BOOL _shouldForceInteractiveAuth;
    BOOL _shouldRequestShortLivedToken;
    BOOL _shouldRequestConfigurationInfo;
    NSString *_proxiedAppBundleID;
    NSUUID *_identifier;
    NSString *_passwordPromptTitle;
    NSString *_proxiedAppName;
    NSString *_password;
    unsigned long long _capabilityForUIDisplay;
    NSString *_shortLivedToken;
    NSString *_message;
    NSString *_username;
    long long _serviceType;
    NSString *_reason;
    NSString *_defaultButtonString;
    long long _maximumLoginAttempts;
    NSArray *_serviceIdentifiers;
    NSString *_DSID;
    NSString *_altDSID;
    NSDictionary *_httpHeadersForRemoteUI;
    id _clientInfo;
    NSString *_displayString;
    NSString *_displayTitle;
    AKAnisetteData *_proxiedDeviceAnisetteData;
    AKDevice *_proxiedDevice;
    AKAnisetteData *_companionDeviceAnisetteData;
    AKDevice *_companionDevice;
}

@property (copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property (readonly, nonatomic) unsigned long long _capabilityForUIDisplay; // @synthesize _capabilityForUIDisplay;
@property (readonly, nonatomic) NSString *_detailedDescription;
@property (readonly, nonatomic) NSUUID *_identifier; // @synthesize _identifier;
@property (nonatomic) BOOL _isPasswordEditable; // @synthesize _isPasswordEditable;
@property (nonatomic, setter=_setProxyingForApp:) BOOL _isProxyingForApp; // @synthesize _isProxyingForApp;
@property (copy, nonatomic, setter=_setMessage:) NSString *_message; // @synthesize _message;
@property (copy, nonatomic, setter=_setPassword:) NSString *_password; // @synthesize _password;
@property (copy, nonatomic) NSString *_passwordPromptTitle; // @synthesize _passwordPromptTitle;
@property (copy, nonatomic, setter=_setProxiedAppBundleID:) NSString *_proxiedAppBundleID; // @synthesize _proxiedAppBundleID;
@property (copy, nonatomic, setter=_setProxiedAppName:) NSString *_proxiedAppName; // @synthesize _proxiedAppName;
@property (copy, nonatomic, setter=_setShortLivedToken:) NSString *_shortLivedToken; // @synthesize _shortLivedToken;
@property (copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (strong, nonatomic) id clientInfo; // @synthesize clientInfo=_clientInfo;
@property (copy, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property (copy, nonatomic) AKAnisetteData *companionDeviceAnisetteData; // @synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosureColor;
@property (copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property (copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property (copy, nonatomic) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *httpHeadersForRemoteUI; // @synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI;
@property (nonatomic) BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property (nonatomic, setter=setTriggeredByNotification:) BOOL isTriggeredByNotification; // @synthesize isTriggeredByNotification=_isTriggeredByNotification;
@property (nonatomic) BOOL isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (nonatomic) long long maximumLoginAttempts; // @synthesize maximumLoginAttempts=_maximumLoginAttempts;
@property (nonatomic) BOOL needsCredentialRecovery; // @synthesize needsCredentialRecovery=_needsCredentialRecovery;
@property (nonatomic) BOOL needsNewAppleID; // @synthesize needsNewAppleID=_needsNewAppleID;
@property (nonatomic) BOOL needsPasswordChange; // @synthesize needsPasswordChange=_needsPasswordChange;
@property (copy, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property (strong, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property (copy, nonatomic) NSString *proxiedDeviceClientInfo;
@property (copy, nonatomic) NSString *proxiedDeviceUDID;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
@property (nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property (nonatomic) BOOL shouldAllowAppleIDCreation; // @synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation;
@property (nonatomic) BOOL shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property (nonatomic) BOOL shouldOfferSecurityUpgrade; // @synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade;
@property (nonatomic) BOOL shouldPreventInteractiveAuth; // @synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth;
@property (nonatomic) BOOL shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property (nonatomic) BOOL shouldRequestConfigurationInfo; // @synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo;
@property (nonatomic) BOOL shouldRequestShortLivedToken; // @synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken;
@property (nonatomic) BOOL shouldUpdatePersistentServiceTokens; // @synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleSecondFactorCodeEntry;
- (id)_initWithIdentifier:(id)arg1;
- (id)_sanitizedCopy;
- (id)_secondFactorQueue;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_updateWithValuesFromContext:(id)arg1;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;

@end

