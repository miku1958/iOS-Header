//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMThreadSafeMutableArrayCollection : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_mutableArray;
}

@property (readonly, copy, nonatomic) NSArray *array;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly, copy, nonatomic) NSMutableArray *mutableArray; // @synthesize mutableArray=_mutableArray;

+ (id)array;
+ (id)arrayWithArray:(id)arg1;
- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)initWithArray:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)setArray:(id)arg1;

@end

