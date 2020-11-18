//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSFastEnumeration-Protocol.h>

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>
{
}

@property (readonly) unsigned long long changeCount;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)_isToManyChangeInformation;
- (long long)_toManyPropertyType;
- (void)addChange:(id)arg1;
- (void)addObject:(id)arg1;
- (void)applyChangesToSet:(id)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeObject:(id)arg1;

@end
