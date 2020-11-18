//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAccount.h>

#import <DASubCal/SubCalValidationTaskDelegate-Protocol.h>

@class DACoreDAVTaskManager, NSData, NSDictionary, NSString, NSURL;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate>
{
    BOOL _isManagedCalendar;
    BOOL _isHolidaySubscribedCalendar;
    int _subCalAccountVersion;
    NSData *_tmpICSData;
}

@property (nonatomic) BOOL allowInsecureConnection;
@property (strong, nonatomic) NSString *calDAVURLString;
@property (readonly, nonatomic) NSString *calendarExternalId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDictionary *externalRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isHolidaySubscribedCalendar; // @synthesize isHolidaySubscribedCalendar=_isHolidaySubscribedCalendar;
@property (nonatomic) BOOL isManagedCalendar; // @synthesize isManagedCalendar=_isManagedCalendar;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL shouldRemoveAlarms;
@property (nonatomic) BOOL shouldRemoveAttachments;
@property (nonatomic) int subCalAccountVersion; // @synthesize subCalAccountVersion=_subCalAccountVersion;
@property (nonatomic) BOOL subscribedURLSanitized;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *syncId;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (strong, nonatomic) NSData *tmpICSData; // @synthesize tmpICSData=_tmpICSData;
@property (nonatomic) BOOL useFTP;

- (void).cxx_destruct;
- (void)_checkValidityWithConsumer:(id)arg1 quickValidate:(BOOL)arg2;
- (id)_tmpICSCalendarPath;
- (id)accountDescription;
- (BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)arg1;
- (void)clearTmpICSData;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2;
- (void)handleTrustChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)hasSubscribedCalendarAtURL:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isSubscribedCalendarAccount;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (id)onBehalfOfBundleIdentifier;
- (void)quickValidate:(id)arg1;
- (void)refreshAllCalendars:(BOOL)arg1;
- (void)removeDBSyncData;
- (void)saveTmpICSData;
- (void)setAccountDescription:(id)arg1;
- (void)setHost:(id)arg1;
- (void)subCalValidationTask:(id)arg1 downloadProgressedTo:(long long)arg2 outOf:(long long)arg3;
- (void)subCalValidationTask:(id)arg1 finishedWithError:(id)arg2 calendarName:(id)arg3 document:(id)arg4 calendarData:(id)arg5;
- (BOOL)upgradeAccount;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)arg1 inStore:(id)arg2 parentAccount:(id)arg3;

@end
