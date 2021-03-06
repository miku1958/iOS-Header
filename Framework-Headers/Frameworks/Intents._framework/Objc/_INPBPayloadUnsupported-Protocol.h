//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBConflictingParameter;

@protocol _INPBPayloadUnsupported <NSObject>

@property (nonatomic) int addMediaIntentMediaDestinationUnsupportedReason;
@property (nonatomic) int addMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) int addTasksIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) int addTasksIntentTargetTaskListMembersUnsupportedReason;
@property (nonatomic) int addTasksIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) int changeAlarmStatusIntentAlarmsUnsupportedReason;
@property (copy, nonatomic) NSArray *conflictingParameters;
@property (readonly, nonatomic) unsigned long long conflictingParametersCount;
@property (nonatomic) int createTimerIntentLabelUnsupportedReason;
@property (nonatomic) unsigned int customUnsupportedReason;
@property (nonatomic) int deleteAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) int deleteTasksIntentTaskListUnsupportedReason;
@property (nonatomic) int deleteTasksIntentTaskUnsupportedReason;
@property (nonatomic) int findDeviceAndPlaySoundIntentDeviceUnsupportedReason;
@property (nonatomic) BOOL hasAddMediaIntentMediaDestinationUnsupportedReason;
@property (nonatomic) BOOL hasAddMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentTargetTaskListMembersUnsupportedReason;
@property (nonatomic) BOOL hasAddTasksIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasChangeAlarmStatusIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasCreateTimerIntentLabelUnsupportedReason;
@property (nonatomic) BOOL hasCustomUnsupportedReason;
@property (nonatomic) BOOL hasDeleteAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasDeleteTasksIntentTaskListUnsupportedReason;
@property (nonatomic) BOOL hasDeleteTasksIntentTaskUnsupportedReason;
@property (nonatomic) BOOL hasFindDeviceAndPlaySoundIntentDeviceUnsupportedReason;
@property (nonatomic) BOOL hasPlayMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasPlayMediaIntentPlaybackSpeedUnsupportedReason;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) BOOL hasRunWorkflowIntentWorkflowUnsupportedReason;
@property (nonatomic) BOOL hasSaveHealthSampleIntentRecordDateUnsupportedReason;
@property (nonatomic) BOOL hasSearchAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasSearchForMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentAnnouncementUnsupportedReason;
@property (nonatomic) BOOL hasSendAnnouncementIntentRecipientsUnsupportedReason;
@property (nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) BOOL hasSetTaskAttributeIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasSetTaskAttributeIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) BOOL hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
@property (nonatomic) BOOL hasShareETAIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasSnoozeAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) BOOL hasSnoozeTasksIntentTaskUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentCallCapabilityUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentCallRecordToCallBackUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentContactsUnsupportedReason;
@property (nonatomic) BOOL hasStartCallIntentPreferredCallProviderUnsupportedReason;
@property (nonatomic) BOOL hasStopShareETAIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasUpdateAlarmIntentAlarmUnsupportedReason;
@property (nonatomic) BOOL hasUpdateMediaAffinityIntentMediaItemsUnsupportedReason;
@property (nonatomic) int playMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) int playMediaIntentPlaybackSpeedUnsupportedReason;
@property (nonatomic) int reason;
@property (nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int requestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) int runWorkflowIntentWorkflowUnsupportedReason;
@property (nonatomic) int saveHealthSampleIntentRecordDateUnsupportedReason;
@property (nonatomic) int searchAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) int searchForMediaIntentMediaItemsUnsupportedReason;
@property (nonatomic) int sendAnnouncementIntentAnnouncementUnsupportedReason;
@property (nonatomic) int sendAnnouncementIntentRecipientsUnsupportedReason;
@property (nonatomic) int sendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int sendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) int setTaskAttributeIntentContactEventTriggerUnsupportedReason;
@property (nonatomic) int setTaskAttributeIntentTemporalEventTriggerUnsupportedReason;
@property (nonatomic) int setTimerAttributeIntentTargetTimerUnsupportedReason;
@property (nonatomic) int shareETAIntentRecipientUnsupportedReason;
@property (nonatomic) int snoozeAlarmIntentAlarmsUnsupportedReason;
@property (nonatomic) int snoozeTasksIntentTaskUnsupportedReason;
@property (nonatomic) int startCallIntentCallCapabilityUnsupportedReason;
@property (nonatomic) int startCallIntentCallRecordToCallBackUnsupportedReason;
@property (nonatomic) int startCallIntentContactsUnsupportedReason;
@property (nonatomic) int startCallIntentPreferredCallProviderUnsupportedReason;
@property (nonatomic) int stopShareETAIntentRecipientUnsupportedReason;
@property (nonatomic) int updateAlarmIntentAlarmUnsupportedReason;
@property (nonatomic) int updateMediaAffinityIntentMediaItemsUnsupportedReason;

+ (Class)conflictingParametersType;
- (int)StringAsAddMediaIntentMediaDestinationUnsupportedReason:(NSString *)arg1;
- (int)StringAsAddMediaIntentMediaItemsUnsupportedReason:(NSString *)arg1;
- (int)StringAsAddTasksIntentContactEventTriggerUnsupportedReason:(NSString *)arg1;
- (int)StringAsAddTasksIntentTargetTaskListMembersUnsupportedReason:(NSString *)arg1;
- (int)StringAsAddTasksIntentTemporalEventTriggerUnsupportedReason:(NSString *)arg1;
- (int)StringAsChangeAlarmStatusIntentAlarmsUnsupportedReason:(NSString *)arg1;
- (int)StringAsCreateTimerIntentLabelUnsupportedReason:(NSString *)arg1;
- (int)StringAsDeleteAlarmIntentAlarmsUnsupportedReason:(NSString *)arg1;
- (int)StringAsDeleteTasksIntentTaskListUnsupportedReason:(NSString *)arg1;
- (int)StringAsDeleteTasksIntentTaskUnsupportedReason:(NSString *)arg1;
- (int)StringAsFindDeviceAndPlaySoundIntentDeviceUnsupportedReason:(NSString *)arg1;
- (int)StringAsPlayMediaIntentMediaItemsUnsupportedReason:(NSString *)arg1;
- (int)StringAsPlayMediaIntentPlaybackSpeedUnsupportedReason:(NSString *)arg1;
- (int)StringAsReason:(NSString *)arg1;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(NSString *)arg1;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(NSString *)arg1;
- (int)StringAsRunWorkflowIntentWorkflowUnsupportedReason:(NSString *)arg1;
- (int)StringAsSaveHealthSampleIntentRecordDateUnsupportedReason:(NSString *)arg1;
- (int)StringAsSearchAlarmIntentAlarmsUnsupportedReason:(NSString *)arg1;
- (int)StringAsSearchForMediaIntentMediaItemsUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendAnnouncementIntentAnnouncementUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendAnnouncementIntentRecipientsUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(NSString *)arg1;
- (int)StringAsSetTaskAttributeIntentContactEventTriggerUnsupportedReason:(NSString *)arg1;
- (int)StringAsSetTaskAttributeIntentTemporalEventTriggerUnsupportedReason:(NSString *)arg1;
- (int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(NSString *)arg1;
- (int)StringAsShareETAIntentRecipientUnsupportedReason:(NSString *)arg1;
- (int)StringAsSnoozeAlarmIntentAlarmsUnsupportedReason:(NSString *)arg1;
- (int)StringAsSnoozeTasksIntentTaskUnsupportedReason:(NSString *)arg1;
- (int)StringAsStartCallIntentCallCapabilityUnsupportedReason:(NSString *)arg1;
- (int)StringAsStartCallIntentCallRecordToCallBackUnsupportedReason:(NSString *)arg1;
- (int)StringAsStartCallIntentContactsUnsupportedReason:(NSString *)arg1;
- (int)StringAsStartCallIntentPreferredCallProviderUnsupportedReason:(NSString *)arg1;
- (int)StringAsStopShareETAIntentRecipientUnsupportedReason:(NSString *)arg1;
- (int)StringAsUpdateAlarmIntentAlarmUnsupportedReason:(NSString *)arg1;
- (int)StringAsUpdateMediaAffinityIntentMediaItemsUnsupportedReason:(NSString *)arg1;
- (void)addConflictingParameters:(_INPBConflictingParameter *)arg1;
- (NSString *)addMediaIntentMediaDestinationUnsupportedReasonAsString:(int)arg1;
- (NSString *)addMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg1;
- (NSString *)addTasksIntentContactEventTriggerUnsupportedReasonAsString:(int)arg1;
- (NSString *)addTasksIntentTargetTaskListMembersUnsupportedReasonAsString:(int)arg1;
- (NSString *)addTasksIntentTemporalEventTriggerUnsupportedReasonAsString:(int)arg1;
- (NSString *)changeAlarmStatusIntentAlarmsUnsupportedReasonAsString:(int)arg1;
- (void)clearConflictingParameters;
- (_INPBConflictingParameter *)conflictingParametersAtIndex:(unsigned long long)arg1;
- (NSString *)createTimerIntentLabelUnsupportedReasonAsString:(int)arg1;
- (NSString *)deleteAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg1;
- (NSString *)deleteTasksIntentTaskListUnsupportedReasonAsString:(int)arg1;
- (NSString *)deleteTasksIntentTaskUnsupportedReasonAsString:(int)arg1;
- (NSString *)findDeviceAndPlaySoundIntentDeviceUnsupportedReasonAsString:(int)arg1;
- (NSString *)playMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg1;
- (NSString *)playMediaIntentPlaybackSpeedUnsupportedReasonAsString:(int)arg1;
- (NSString *)reasonAsString:(int)arg1;
- (NSString *)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (NSString *)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
- (NSString *)runWorkflowIntentWorkflowUnsupportedReasonAsString:(int)arg1;
- (NSString *)saveHealthSampleIntentRecordDateUnsupportedReasonAsString:(int)arg1;
- (NSString *)searchAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg1;
- (NSString *)searchForMediaIntentMediaItemsUnsupportedReasonAsString:(int)arg1;
- (NSString *)sendAnnouncementIntentAnnouncementUnsupportedReasonAsString:(int)arg1;
- (NSString *)sendAnnouncementIntentRecipientsUnsupportedReasonAsString:(int)arg1;
- (NSString *)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (NSString *)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (NSString *)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
- (NSString *)setTaskAttributeIntentContactEventTriggerUnsupportedReasonAsString:(int)arg1;
- (NSString *)setTaskAttributeIntentTemporalEventTriggerUnsupportedReasonAsString:(int)arg1;
- (NSString *)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg1;
- (NSString *)shareETAIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (NSString *)snoozeAlarmIntentAlarmsUnsupportedReasonAsString:(int)arg1;
- (NSString *)snoozeTasksIntentTaskUnsupportedReasonAsString:(int)arg1;
- (NSString *)startCallIntentCallCapabilityUnsupportedReasonAsString:(int)arg1;
- (NSString *)startCallIntentCallRecordToCallBackUnsupportedReasonAsString:(int)arg1;
- (NSString *)startCallIntentContactsUnsupportedReasonAsString:(int)arg1;
- (NSString *)startCallIntentPreferredCallProviderUnsupportedReasonAsString:(int)arg1;
- (NSString *)stopShareETAIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (NSString *)updateAlarmIntentAlarmUnsupportedReasonAsString:(int)arg1;
- (NSString *)updateMediaAffinityIntentMediaItemsUnsupportedReasonAsString:(int)arg1;
@end

