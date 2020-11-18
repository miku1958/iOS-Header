//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/MSPlatform-Protocol.h>

@class ACAccountStore, NSData, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    BOOL _isPerfLoggingEnabled;
    NSData *_pushToken;
    ACAccountStore *_accountStore;
}

@property (strong, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property (strong, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property (readonly) Class superclass;

+ (id)thePlatform;
- (void).cxx_destruct;
- (id)OSString;
- (id)OSVersion;
- (id)UDID;
- (id)_accountForPersonID:(id)arg1;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (BOOL)_mayPerformFileTransfer;
- (void)_rereadDefaults;
- (id)appBundleInfoString;
- (id)authTokenForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (id)hardwareString;
- (id)init;
- (BOOL)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (id)pathMediaStreamDir;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (Class)publisherPluginClass;
- (id)pushTokenForPersonID:(id)arg1;
- (Class)sharingPluginClass;
- (BOOL)shouldEnableNewFeatures;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (id)socketOptions;
- (Class)subscriberPluginClass;
- (id)theDaemon;

@end

