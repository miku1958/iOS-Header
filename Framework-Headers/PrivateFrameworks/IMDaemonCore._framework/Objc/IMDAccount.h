//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMSystemMonitorListener-Protocol.h>

@class IMDService, IMDServiceSession, NSDictionary, NSMutableDictionary, NSString;

@interface IMDAccount : NSObject <IMSystemMonitorListener>
{
    NSMutableDictionary *_accountDefaults;
    NSString *_account;
    IMDService *_service;
    IMDServiceSession *_session;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
    BOOL _isLoading;
    BOOL _isManaged;
    NSString *_loginStatusMessage;
    unsigned int _loginStatus;
    int _disconnectReason;
}

@property (readonly, strong, nonatomic) NSDictionary *accountDefaults; // @synthesize accountDefaults=_accountDefaults;
@property (readonly, strong, nonatomic) NSString *accountID; // @synthesize accountID=_account;
@property (readonly, strong, nonatomic) NSDictionary *accountInfoToPost;
@property (readonly, nonatomic) BOOL canMakeDowngradeRoutingChecks;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property (nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property (readonly, strong, nonatomic) NSString *loginID;
@property (readonly, strong, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, nonatomic) int registrationError;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, strong, nonatomic) IMDService *service; // @synthesize service=_service;
@property (readonly, nonatomic) int serviceDisconnectReason; // @synthesize serviceDisconnectReason=_disconnectReason;
@property (readonly, nonatomic) unsigned int serviceLoginStatus; // @synthesize serviceLoginStatus=_loginStatus;
@property (readonly, strong, nonatomic) NSString *serviceLoginStatusMessage; // @synthesize serviceLoginStatusMessage=_loginStatusMessage;
@property (strong, nonatomic) IMDServiceSession *session; // @synthesize session=_session;
@property (readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property (readonly, strong, nonatomic) NSDictionary *status;
@property (readonly, strong, nonatomic) NSDictionary *statusToPost;
@property (readonly, strong, nonatomic) NSDictionary *statusToSave;
@property (nonatomic) BOOL wasDisabledAutomatically;

- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (id)_registrationInfo;
- (void)_updateIdle;
- (void)changeStatus:(id)arg1;
- (void)createSessionIfNecessary;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)postAccountCapabilities;
- (void)postAccountCapabilitiesToListener:(id)arg1;
- (void)releaseSession;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)systemDidBecomeIdle;
- (void)systemDidBecomeUnidle;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
- (void)writeAccountDefaults:(id)arg1;

@end

