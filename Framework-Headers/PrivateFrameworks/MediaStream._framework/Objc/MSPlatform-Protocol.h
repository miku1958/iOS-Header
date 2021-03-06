//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaStream/NSObject-Protocol.h>

@class MSMediaStreamDaemon, NSData, NSDictionary, NSString, NSURL;

@protocol MSPlatform <NSObject>
- (NSString *)OSString;
- (NSString *)UDID;
- (NSString *)appBundleInfoString;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (NSString *)hardwareString;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(struct __va_list_tag [1])arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
- (NSString *)pathMediaStreamDir;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (Class)publisherPluginClass;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (NSDictionary *)socketOptions;
- (Class)subscriberPluginClass;
- (MSMediaStreamDaemon *)theDaemon;

@optional
- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)policyMaySendDelete;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (BOOL)shouldEnableNewFeatures;
@end

