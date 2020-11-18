//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NTNewsTodayResultsSourceFetchHelper : NSObject
{
    NSMutableArray *_sectionQueueDescriptors;
    NSMutableDictionary *_remainingSectionsBySectionQueueDescriptors;
}

@property (strong, nonatomic) NSMutableDictionary *remainingSectionsBySectionQueueDescriptors; // @synthesize remainingSectionsBySectionQueueDescriptors=_remainingSectionsBySectionQueueDescriptors;
@property (strong, nonatomic) NSMutableArray *sectionQueueDescriptors; // @synthesize sectionQueueDescriptors=_sectionQueueDescriptors;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSectionQueueDescriptors:(id)arg1;
- (void)removeSectionDescriptors:(id)arg1;
- (id)sectionDescriptorsAtHeadsOfQueues;

@end
