//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSSet;
@protocol OS_os_log;

@interface PGSuggestionNotificationProfile : NSObject
{
    NSArray *_existingSuggestions;
    BOOL _eligibleForNotification;
    unsigned char _userType;
    NSSet *_shareParticipantContactIdentifiers;
    NSDate *_dateOfLastNotification;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (readonly, nonatomic) NSDate *dateOfLastNotification;
@property (readonly, nonatomic) BOOL eligibleForNotification;
@property (nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property (readonly, nonatomic) unsigned char userType;

+ (unsigned char)_requiredNotificationQualityForUserType:(unsigned char)arg1;
+ (double)_requiredTimeIntervalFromLastNotificationForUserType:(unsigned char)arg1;
- (void).cxx_destruct;
- (void)_determineUserTypeAndEligibility;
- (id)initWithExistingSuggestions:(id)arg1;
- (unsigned char)notificationQualityForCollectionNode:(id)arg1;
- (unsigned char)notificationQualityForMomentNode:(id)arg1;
- (id)shareParticipantContactIdentifiers;
- (BOOL)shouldNotifyForSuggestion:(id)arg1 withOptions:(id)arg2;

@end

