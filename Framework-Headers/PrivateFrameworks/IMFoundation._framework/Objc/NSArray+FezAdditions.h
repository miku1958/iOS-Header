//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (FezAdditions)
- (id)__IMStripPotentialTokenURIs;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)__imArrayByApplyingBlock:(CDUnknownBlockType)arg1 filter:(CDUnknownBlockType)arg2;
- (id)__imArrayByFilteringWithBlock:(CDUnknownBlockType)arg1;
- (id)__imDeepCopy;
- (id)__imFirstObject;
- (void)__imForEach:(CDUnknownBlockType)arg1;
- (BOOL)__imIsMutable;
- (id)__imSetFromArray;
- (id)_copyForEnumerating;
- (BOOL)_hasSameMembers:(id)arg1;
- (BOOL)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (BOOL)containsObjectIdenticalTo:(id)arg1;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;
@end

