//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTTodayResultsAggregator-Protocol.h>

@class NSDate, NSString;
@protocol FCCoreConfigurationManager, FCFeedPersonalizing, FCTodayPrivateData;

@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator>
{
    id<FCCoreConfigurationManager> _configurationManager;
    id<FCFeedPersonalizing> _feedPersonalizer;
    NSDate *_filterDate;
    NSObject<FCTodayPrivateData> *_todayData;
}

@property (strong, nonatomic) id<FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property (copy, nonatomic) NSDate *filterDate; // @synthesize filterDate=_filterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<FCTodayPrivateData> *todayData; // @synthesize todayData=_todayData;

- (void).cxx_destruct;
- (id)_itemsForSection:(id)arg1 items:(id)arg2 withBudgetInfo:(id)arg3 previouslyChosenItems:(id)arg4 priorClusterIDsInOtherSections:(id)arg5 sectionItemsLimit:(unsigned long long)arg6 otherArticleIDs:(id)arg7 embedsLimit:(unsigned long long)arg8 remainingSlots:(double)arg9 slotsUsed:(double *)arg10 noMoreItemsToGive:(BOOL *)arg11 noRoomForMoreItems:(BOOL *)arg12 slotAllocationByDynamicSlotItemID:(id)arg13;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 filterDate:(id)arg3 todayData:(id)arg4;

@end

