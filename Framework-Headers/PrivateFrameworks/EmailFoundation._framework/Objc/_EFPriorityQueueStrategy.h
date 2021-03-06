//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy>
{
    CDUnknownBlockType _comparator;
}

@property (readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_indexForObject:(id)arg1 buffer:(id)arg2;
- (unsigned long long)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end

