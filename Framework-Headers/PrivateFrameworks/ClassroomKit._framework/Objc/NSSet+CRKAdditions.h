//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

#import <ClassroomKit/_SetOperable-Protocol.h>

@class NSArray, NSString;

@interface NSSet (CRKAdditions) <_SetOperable>

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSString *crk_stableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)crk_filterUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_mapUsingBlock:(CDUnknownBlockType)arg1;
- (id)crk_setByAddingSet:(id)arg1;
- (id)crk_setByIntersectingSet:(id)arg1;
- (id)crk_setByRemovingObject:(id)arg1;
- (id)crk_setBySubtractingSet:(id)arg1;
- (id)setByCombiningWithSet:(id)arg1 operation:(SEL)arg2;
- (id)setByIntersectingSet:(id)arg1;
- (id)setBySubtractingSet:(id)arg1;
@end

