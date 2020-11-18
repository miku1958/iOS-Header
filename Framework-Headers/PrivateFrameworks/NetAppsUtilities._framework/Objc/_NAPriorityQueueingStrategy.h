//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NAQueueingStrategy-Protocol.h>

@class NSString;

@interface _NAPriorityQueueingStrategy : NSObject <NAQueueingStrategy>
{
    CDUnknownBlockType _priorityComparator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end

