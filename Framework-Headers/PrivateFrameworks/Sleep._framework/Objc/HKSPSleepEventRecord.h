//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sleep/BSDescriptionProviding-Protocol.h>
#import <Sleep/HKSPDictionarySerializable-Protocol.h>
#import <Sleep/HKSPObject-Protocol.h>
#import <Sleep/NAEquatable-Protocol.h>
#import <Sleep/NAHashable-Protocol.h>
#import <Sleep/NSMutableCopying-Protocol.h>

@class NSDate, NSSet, NSString;

@interface HKSPSleepEventRecord : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying>
{
    unsigned long long _version;
    NSDate *_lastModifiedDate;
    NSDate *_bedtimeDelayedUntilDate;
    NSDate *_bedtimeSkippedDate;
    NSDate *_wakeUpEarlyNotificationConfirmedDate;
    NSDate *_wakeUpConfirmedUntilDate;
    NSDate *_wakeUpAlarmDismissedDate;
    NSDate *_wakeUpAlarmSnoozedUntilDate;
    NSDate *_windDownSkippedDate;
    NSDate *_goodMorningDismissedDate;
    long long _sleepCoachingOnboardingCompletedVersion;
    NSDate *_sleepCoachingOnboardingFirstCompletedDate;
    long long _sleepTrackingOnboardingCompletedVersion;
    NSDate *_sleepTrackingOnboardingFirstCompletedDate;
    long long _sleepWindDownShortcutsOnboardingCompletedVersion;
    NSDate *_sleepWindDownShortcutsOnboardingFirstCompletedDate;
}

@property (readonly, nonatomic, getter=isAnySleepCoachingOnboardingCompleted) BOOL anySleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepTrackingOnboardingCompleted) BOOL anySleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isAnySleepWindDownShortcutsOnboardingCompleted) BOOL anySleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy, nonatomic) NSDate *bedtimeDelayedUntilDate; // @synthesize bedtimeDelayedUntilDate=_bedtimeDelayedUntilDate;
@property (readonly, copy, nonatomic) NSDate *bedtimeSkippedDate; // @synthesize bedtimeSkippedDate=_bedtimeSkippedDate;
@property (readonly, nonatomic, getter=isCurrentSleepCoachingOnboardingCompleted) BOOL currentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepTrackingOnboardingCompleted) BOOL currentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic, getter=isCurrentSleepWindDownShortcutsOnboardingCompleted) BOOL currentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *goodMorningDismissedDate; // @synthesize goodMorningDismissedDate=_goodMorningDismissedDate;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion; // @synthesize sleepCoachingOnboardingCompletedVersion=_sleepCoachingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate; // @synthesize sleepCoachingOnboardingFirstCompletedDate=_sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion; // @synthesize sleepTrackingOnboardingCompletedVersion=_sleepTrackingOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate; // @synthesize sleepTrackingOnboardingFirstCompletedDate=_sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion; // @synthesize sleepWindDownShortcutsOnboardingCompletedVersion=_sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, copy, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate; // @synthesize sleepWindDownShortcutsOnboardingFirstCompletedDate=_sleepWindDownShortcutsOnboardingFirstCompletedDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmDismissedDate; // @synthesize wakeUpAlarmDismissedDate=_wakeUpAlarmDismissedDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpAlarmSnoozedUntilDate; // @synthesize wakeUpAlarmSnoozedUntilDate=_wakeUpAlarmSnoozedUntilDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpConfirmedUntilDate; // @synthesize wakeUpConfirmedUntilDate=_wakeUpConfirmedUntilDate;
@property (readonly, copy, nonatomic) NSDate *wakeUpEarlyNotificationConfirmedDate; // @synthesize wakeUpEarlyNotificationConfirmedDate=_wakeUpEarlyNotificationConfirmedDate;
@property (readonly, copy, nonatomic) NSDate *windDownSkippedDate; // @synthesize windDownSkippedDate=_windDownSkippedDate;

+ (BOOL)supportsSecureCoding;
+ (id)testSleepEventRecord;
+ (id)testSleepEventRecordWithAllPropertiesSet;
- (void).cxx_destruct;
- (void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2;
- (BOOL)_equateTo:(id)arg1 builderBuilderBlock:(CDUnknownBlockType)arg2;
- (void)_migrateForCoder:(id)arg1;
- (BOOL)_needsMigrationForCoder:(id)arg1;
- (void)copyFromObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentTo:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
