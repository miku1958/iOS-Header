//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (NAAdditions)
+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;
+ (id)na_arrayWithSafeObject:(id)arg1;
- (BOOL)na_all:(CDUnknownBlockType)arg1;
- (BOOL)na_any:(CDUnknownBlockType)arg1;
- (id)na_arrayByFlattening;
- (id)na_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(CDUnknownBlockType)arg1;
- (id)na_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;
- (void)na_each:(CDUnknownBlockType)arg1;
- (id)na_filter:(CDUnknownBlockType)arg1;
- (id)na_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)na_flatMap:(CDUnknownBlockType)arg1;
- (id)na_map:(CDUnknownBlockType)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(CDUnknownBlockType)arg2;
@end
