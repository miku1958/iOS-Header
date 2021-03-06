//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString;
@protocol NTSectionFetchDescriptor;

@interface NTArticleIDsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    id<NTSectionFetchDescriptor> _privateFetchDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) id<NTSectionFetchDescriptor> privateFetchDescriptor; // @synthesize privateFetchDescriptor=_privateFetchDescriptor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithArticleIDsConfiguration:(id)arg1;

@end

