//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASChangedCollectionLeaf.h>

#import <DAEAS/DADataElement-Protocol.h>

@class ASToDoRecurrence, NSArray, NSDate, NSNumber, NSString, NSTimeZone;

@interface ASToDo : ASChangedCollectionLeaf <DADataElement>
{
    void *_calTask;
    NSString *_body;
    NSNumber *_bodyTruncated;
    NSArray *_categories;
    NSNumber *_complete;
    NSDate *_dateCompleted;
    NSDate *_dueDate;
    NSDate *_utcDueDate;
    NSNumber *_importance;
    NSNumber *_reminderIsSet;
    NSDate *_reminderDateTime;
    NSNumber *_sensitivity;
    NSDate *_startTime;
    NSDate *_utcStartTime;
    NSString *_subject;
    ASToDoRecurrence *_recurrence;
}

@property (strong, nonatomic) NSString *body; // @synthesize body=_body;
@property (strong, nonatomic) NSNumber *bodyTruncated; // @synthesize bodyTruncated=_bodyTruncated;
@property (nonatomic) void *calTask; // @synthesize calTask=_calTask;
@property (strong, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) NSNumber *complete; // @synthesize complete=_complete;
@property (strong, nonatomic) NSDate *dateCompleted; // @synthesize dateCompleted=_dateCompleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSDate *dueDate; // @synthesize dueDate=_dueDate;
@property (readonly, nonatomic) NSTimeZone *dueDateTimeZone;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *importance; // @synthesize importance=_importance;
@property (strong, nonatomic) ASToDoRecurrence *recurrence; // @synthesize recurrence=_recurrence;
@property (strong, nonatomic) NSDate *reminderDateTime; // @synthesize reminderDateTime=_reminderDateTime;
@property (strong, nonatomic) NSNumber *reminderIsSet; // @synthesize reminderIsSet=_reminderIsSet;
@property (strong, nonatomic) NSNumber *sensitivity; // @synthesize sensitivity=_sensitivity;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property (readonly) Class superclass;
@property (strong, nonatomic, setter=setUTCDueDate:) NSDate *utcDueDate; // @synthesize utcDueDate=_utcDueDate;
@property (strong, nonatomic, setter=setUTCStartTime:) NSDate *utcStartTime; // @synthesize utcStartTime=_utcStartTime;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (id)toDoWithCalTask:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
- (void).cxx_destruct;
- (id)_bestGuessTimeZoneWithLocalDate:(id)arg1 utcDate:(id)arg2;
- (void)_loadAttributesFromCalTask:(void *)arg1 forAccount:(id)arg2;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (long long)dataclass;
- (void)dealloc;
- (BOOL)deleteFromCalendar;
- (BOOL)deleteFromContainer:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCalTask:(void *)arg1 serverID:(id)arg2 account:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)loadCalRecordForAccount:(id)arg1;
- (void)loadClientIDs;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)postProcessApplicationData;
- (BOOL)saveServerIDToCalendar;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)saveToCalendarWithExistingRecord:(void *)arg1 intoCalendar:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (BOOL)saveWithLocalObject:(void *)arg1 toContainer:(void *)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL *)arg4 account:(id)arg5;
- (void)setLocalItem:(void *)arg1;

@end

