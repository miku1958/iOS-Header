//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_bundleIDToPIDMap;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3;
- (BOOL)hasEntitlement:(id)arg1 forPID:(int)arg2;
- (id)init;

@end

