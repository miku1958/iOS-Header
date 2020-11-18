//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLHighlightItemClustererRule-Protocol.h>
#import <PhotoLibraryServices/PLHighlightItemPromoterRule-Protocol.h>

@class NSCalendar, NSString;

@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule>
{
    NSCalendar *_calendar;
}

@property (readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dominantMonthDateComponentForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 numberOfDaysInMonthOfStartDate:(long long)arg3;
- (id)fallbackHighlightItemFromAllHighlightItems:(id)arg1;
- (BOOL)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (BOOL)highlightItemHasMinimumRequirementToBePromoted:(id)arg1;
- (BOOL)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (id)highlightItemsSortedByImportance:(id)arg1;
- (id)init;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(BOOL)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;

@end
