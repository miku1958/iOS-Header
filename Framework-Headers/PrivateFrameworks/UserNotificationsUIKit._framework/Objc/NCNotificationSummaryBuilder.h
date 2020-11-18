//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NCNotificationRequest, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NCNotificationSummaryBuilder : NSObject
{
    NCNotificationRequest *_leadingNotificationRequest;
    NSMutableArray *_notificationRequests;
    NSMutableOrderedSet *_formatStrings;
    NSMutableDictionary *_formatStringsCounts;
    NSMutableOrderedSet *_arguments;
    NSMutableDictionary *_argumentsCounts;
    unsigned long long _defaultFormatsCount;
    unsigned long long _emptyArgumentsCount;
    NSString *_summaryText;
}

@property (readonly, copy, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;

- (void).cxx_destruct;
- (void)_addNotificationRequest:(id)arg1;
- (id)_buildSummaryText;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1;
- (id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1 arguments:(id)arg2;
- (id)_filteredArgumentsArrayWithArguments:(id)arg1;
- (id)_formatListWithArguments:(id)arg1;
- (id)_formatListWithArguments:(id)arg1 truncated:(BOOL)arg2 truncatedArgumentsCount:(unsigned long long *)arg3;
- (void)_insertString:(id)arg1 intoSequence:(id)arg2 withCounters:(id)arg3;
- (id)_localizedSummaryWithFormat:(id)arg1 notificationsCount:(unsigned long long)arg2 arguments:(id)arg3;
- (id)_localizedSummaryWithFormats:(id)arg1 andCounts:(id)arg2;
- (unsigned long long)_summaryNotificationsCount;
- (void)_updateSummaryText;
- (id)description;
- (void)updateWithNotificationRequests:(id)arg1;

@end

