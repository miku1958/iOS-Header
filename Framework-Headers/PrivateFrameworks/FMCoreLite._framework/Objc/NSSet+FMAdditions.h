//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

@interface NSSet (FMAdditions)
+ (id)fm_setWithSafeObject:(id)arg1;
- (BOOL)fm_any:(CDUnknownBlockType)arg1;
- (void)fm_each:(CDUnknownBlockType)arg1;
- (id)fm_filter:(CDUnknownBlockType)arg1;
- (id)fm_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)fm_map:(CDUnknownBlockType)arg1;
- (id)fm_setByFlattening;
- (id)fm_setByIntersectingWithSet:(id)arg1;
- (id)fm_setByRemovingObjectsFromSet:(id)arg1;
@end

