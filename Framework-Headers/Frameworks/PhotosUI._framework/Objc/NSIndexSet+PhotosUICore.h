//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (PhotosUICore)

@property (readonly, nonatomic) struct _NSRange px_coveringRange;
@property (readonly, nonatomic) NSString *px_shortDescription;

- (id)px_indexSetAdjustedForDeletions:(id)arg1;
- (id)px_indexSetAdjustedForInsertions:(id)arg1;
- (id)px_indexesInRange:(struct _NSRange)arg1;
- (id)px_intersectionWithIndexSet:(id)arg1;
- (BOOL)px_isSingleRangeWithMax:(long long)arg1;
@end
