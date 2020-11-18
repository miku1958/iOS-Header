//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDNotifier-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDNotifierConfiguration, FLFollowUpController, NSString;
@protocol OS_os_log;

@interface DEDFollowUpNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>
{
    DEDNotifierConfiguration *_config;
    NSString *_bugSessionIdentifier;
    FLFollowUpController *_followUpController;
    NSObject<OS_os_log> *_log;
}

@property (strong) NSString *bugSessionIdentifier; // @synthesize bugSessionIdentifier=_bugSessionIdentifier;
@property (weak) DEDNotifierConfiguration *config; // @synthesize config=_config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)cancelNotification;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)scheduleNotification;

@end

