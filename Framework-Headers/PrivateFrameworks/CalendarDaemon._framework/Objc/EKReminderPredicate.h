//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSDate, NSSet, NSString;

@interface EKReminderPredicate : EKPredicate <EKDefaultPropertiesLoading>
{
    BOOL _limitToCompletedOrIncomplete;
    BOOL _completed;
    BOOL _useCompletionDateAsAlternate;
    BOOL _useDueDateAsCompletionDate;
    BOOL _shouldLoadDefaultProperties;
    int _sortOrder;
    NSString *_listTitle;
    NSDate *_dueAfter;
    NSDate *_dueBefore;
    NSString *_searchTerm;
    unsigned long long _maxResults;
    NSSet *_defaultPropertiesToLoad;
}

@property (nonatomic) BOOL completed; // @synthesize completed=_completed;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSSet *defaultPropertiesToLoad; // @synthesize defaultPropertiesToLoad=_defaultPropertiesToLoad;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;
@property (strong, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL limitToCompletedOrIncomplete; // @synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete;
@property (strong, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
@property (nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property (strong, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property (nonatomic) BOOL shouldLoadDefaultProperties; // @synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties;
@property (nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCompletionDateAsAlternate; // @synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate;
@property (nonatomic) BOOL useDueDateAsCompletionDate; // @synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate;

+ (id)predicateWithCalendars:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalendars:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

