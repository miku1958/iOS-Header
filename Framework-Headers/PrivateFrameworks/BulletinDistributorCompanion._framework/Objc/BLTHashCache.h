//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BLTHashCache : NSObject
{
    NSMutableDictionary *_cacheBySectionID;
}

- (void).cxx_destruct;
- (id)init;
- (void)updateCacheWithItems:(id)arg1 forSectionID:(id)arg2 matchID:(id)arg3 result:(CDUnknownBlockType)arg4;

@end
