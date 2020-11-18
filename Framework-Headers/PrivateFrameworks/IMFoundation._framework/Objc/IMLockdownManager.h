//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IMLockdownManager : NSObject
{
    BOOL _settingUpActivationState;
    BOOL _isInternalInstall;
    BOOL _isCarrierInstall;
    BOOL _isNonUIInstall;
    BOOL _isVendorInstall;
    BOOL _hasShownMismatchedSIM;
    BOOL _hasShownWaitingAlertThisSession;
    unsigned long long _state;
}

@property (nonatomic) BOOL _hasShownMismatchedSIM; // @synthesize _hasShownMismatchedSIM;
@property (nonatomic) BOOL _hasShownWaitingAlertThisSession; // @synthesize _hasShownWaitingAlertThisSession;
@property (nonatomic) BOOL _isCarrierInstall; // @synthesize _isCarrierInstall;
@property (nonatomic) BOOL _isInternalInstall; // @synthesize _isInternalInstall;
@property (nonatomic) BOOL _isNonUIInstall; // @synthesize _isNonUIInstall;
@property (nonatomic) BOOL _isVendorInstall; // @synthesize _isVendorInstall;
@property (nonatomic) BOOL _settingUpActivationState; // @synthesize _settingUpActivationState;
@property (nonatomic, setter=_setState:) unsigned long long _state; // @synthesize _state;
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) BOOL isCarrierInstall;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) BOOL isNonUIInstall;
@property (readonly, nonatomic) BOOL isVendorInstall;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;
- (void)_calculateInstallType;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (void)dealloc;
- (id)description;
- (id)init;
- (long long)lockdownState;

@end

