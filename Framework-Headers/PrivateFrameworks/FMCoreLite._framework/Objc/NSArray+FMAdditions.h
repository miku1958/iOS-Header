//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (FMAdditions)
+ (id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(CDUnknownBlockType)arg2;
+ (id)fm_arrayWithSafeObject:(id)arg1;
- (BOOL)fm_all:(CDUnknownBlockType)arg1;
- (BOOL)fm_any:(CDUnknownBlockType)arg1;
- (id)fm_arrayByFlattening;
- (id)fm_arrayWithResultsOfBlock:(CDUnknownBlockType)arg1;
- (id)fm_dictionaryWithKeyGenerator:(CDUnknownBlockType)arg1;
- (void)fm_each:(CDUnknownBlockType)arg1;
- (id)fm_filter:(CDUnknownBlockType)arg1;
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fm_map:(CDUnknownBlockType)arg1;
@end
