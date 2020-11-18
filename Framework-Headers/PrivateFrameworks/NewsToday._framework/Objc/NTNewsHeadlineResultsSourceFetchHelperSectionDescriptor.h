//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionDescriptor-Protocol.h>

@class NSString, NSURL;
@protocol NTSectionDescriptor, NTSectionQueueDescriptor;

@interface NTNewsHeadlineResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor>
{
    id<NTSectionDescriptor> _sectionDescriptor;
    id<NTSectionQueueDescriptor> _parentSectionQueueDescriptor;
}

@property (readonly, copy, nonatomic) NSString *backgroundGradientColor;
@property (readonly, nonatomic) unsigned long long cachedResultCutoffTime;
@property (readonly, copy, nonatomic) NSString *compactName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *discoverMoreVideosSubtitle;
@property (readonly, copy, nonatomic) NSString *discoverMoreVideosTitle;
@property (readonly, copy, nonatomic) NSURL *discoverMoreVideosURL;
@property (readonly, nonatomic) BOOL displaysAsVideoPlaylist;
@property (readonly, nonatomic) unsigned long long fallbackOrder;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int leadingCellPromotionPolicy;
@property (readonly, nonatomic) unsigned long long maximumStoriesAllocation;
@property (readonly, nonatomic) unsigned long long minimumStoriesAllocation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nameColor;
@property (readonly, copy, nonatomic) id<NTSectionQueueDescriptor> parentSectionQueueDescriptor; // @synthesize parentSectionQueueDescriptor=_parentSectionQueueDescriptor;
@property (readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property (readonly, nonatomic) int readArticlesFilterMethod;
@property (readonly, copy, nonatomic) NSString *referralBarName;
@property (readonly, copy, nonatomic) id<NTSectionDescriptor> sectionDescriptor; // @synthesize sectionDescriptor=_sectionDescriptor;
@property (readonly, nonatomic) int seenArticlesFilterMethod;
@property (readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long supplementalInterSectionFilterOptions;
@property (readonly, nonatomic) long long supplementalIntraSectionFilterOptions;
@property (readonly, nonatomic) BOOL videoPlaysMutedByDefault;

- (void).cxx_destruct;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)extractResultsFromCatchUpOperation:(id)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2;

@end

