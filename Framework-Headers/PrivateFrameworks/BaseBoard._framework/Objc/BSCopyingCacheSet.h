//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet;

@interface BSCopyingCacheSet : NSObject
{
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (void)addObject:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)immutableSet;
- (void)removeObject:(id)arg1;

@end
