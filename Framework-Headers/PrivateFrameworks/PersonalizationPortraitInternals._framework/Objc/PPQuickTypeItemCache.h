//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface PPQuickTypeItemCache : NSObject
{
    NSMutableOrderedSet *_keys;
    NSMutableDictionary *_entries;
}

- (void).cxx_destruct;
- (void)clear;
- (id)entryWithKey:(id)arg1;
- (id)init;
- (void)setEntry:(id)arg1 key:(id)arg2;

@end
