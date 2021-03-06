//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIKBRTMutableOrderIndexSet : NSObject
{
    BOOL _reversed;
    NSMutableIndexSet *_indexSet;
}

@property (readonly) unsigned long long beginningIndex;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long endingIndex;
@property (readonly) unsigned long long highestIndex;
@property (readonly, nonatomic) NSMutableIndexSet *indexSet; // @synthesize indexSet=_indexSet;
@property (readonly) unsigned long long lowestIndex;
@property (nonatomic) BOOL reversed; // @synthesize reversed=_reversed;

- (void).cxx_destruct;
- (void)addIndex:(unsigned long long)arg1;
- (id)description;
- (id)init;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)removeIndexes:(id)arg1;

@end

