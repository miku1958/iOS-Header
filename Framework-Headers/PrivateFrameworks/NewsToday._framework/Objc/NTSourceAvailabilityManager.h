//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;
@protocol OS_dispatch_queue;

@interface NTSourceAvailabilityManager : NSObject
{
    CDUnknownBlockType _preferredSourceChangedNotificationBlock;
    Class _preferredSourceFetchDescriptorClass;
    NSOrderedSet *_availabilityEntriesInPreferredOrder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder; // @synthesize availabilityEntriesInPreferredOrder=_availabilityEntriesInPreferredOrder;
@property (readonly, nonatomic) Class likelyPreferredSourceFetchDescriptorClass;
@property (copy, nonatomic) CDUnknownBlockType preferredSourceChangedNotificationBlock; // @synthesize preferredSourceChangedNotificationBlock=_preferredSourceChangedNotificationBlock;
@property (nonatomic) Class preferredSourceFetchDescriptorClass; // @synthesize preferredSourceFetchDescriptorClass=_preferredSourceFetchDescriptorClass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)_recomputePreferredAvailableTodayResultsSource;
- (void)_setPreferredAvailableTodayResultsSource:(Class)arg1;
- (id)init;
- (id)initWithAvailabilityEntriesInPreferredOrder:(id)arg1 queue:(id)arg2;

@end

