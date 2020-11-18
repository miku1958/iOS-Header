//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

#import <SafariShared/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface WBSCyclerBookmarkListRepresentation : WBSCyclerBookmarkRepresentation <NSFastEnumeration>
{
    NSMutableArray *_children;
}

@property (readonly, nonatomic) unsigned long long numberOfChildren;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_tryToDeleteDescendant:(id)arg1;
- (void)addChild:(id)arg1;
- (id)allDescendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (BOOL)containsChild:(id)arg1;
- (BOOL)containsDescendant:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)deleteAllChildren;
- (void)deleteChild:(id)arg1;
- (void)deleteDescendant:(id)arg1;
- (id)descendantWithUniqueIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isEquivalent:(id)arg1;
- (id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1;
- (id)randomDescendant;
- (id)randomDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)randomListDescendant;

@end

