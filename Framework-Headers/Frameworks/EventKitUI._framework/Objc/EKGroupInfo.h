//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class EKSource, NSArray, NSMutableArray, NSSet, NSString;

@interface EKGroupInfo : NSObject
{
    NSMutableArray *_calendars;
    int _customGroupType;
    NSString *_customTitle;
    NSString *_customTitleAtBeginningOfSentence;
    NSString *_typeTitle;
    NSString *_title;
    NSString *_titleForBeginningOfSentence;
    BOOL _selected;
    BOOL _showSelectAllButton;
    BOOL _showVerifyAccountButton;
    EKSource *_source;
    NSString *_footer;
}

@property (readonly, strong, nonatomic) NSArray *calendarInfos;
@property (readonly, copy, nonatomic) NSSet *calendarSet;
@property (strong, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) unsigned long long numCalendars;
@property (readonly, nonatomic) unsigned long long numSelectableCalendars;
@property (readonly, nonatomic) unsigned long long numSelectedCalendars;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (readonly, copy, nonatomic) NSSet *selectedCalendarSet;
@property (readonly, nonatomic) BOOL showAddCalendarButton;
@property (readonly, nonatomic) BOOL showCalendarNameIfSolitary;
@property (nonatomic) BOOL showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
@property (nonatomic) BOOL showVerifyAccountButton; // @synthesize showVerifyAccountButton=_showVerifyAccountButton;
@property (readonly, nonatomic) int sortOrder;
@property (strong, nonatomic) EKSource *source; // @synthesize source=_source;
@property (readonly, nonatomic) EKSource *sourceForSyncError;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *typeTitle;

- (void).cxx_destruct;
- (id)calendarAtIndex:(unsigned long long)arg1;
- (id)copyCalendars;
- (id)description;
- (id)init;
- (id)initWithCustomGroupType:(int)arg1;
- (id)initWithSource:(id)arg1;
- (void)insertCalendarInfo:(id)arg1;
- (void)removeCalendar:(id)arg1;
- (void)selectAll;
- (void)selectNone;
- (void)setCustomTitle:(id)arg1 forBeginningOfSentence:(id)arg2;
- (id)titleForBeginningOfSentence:(BOOL)arg1;

@end

