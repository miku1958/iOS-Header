//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BBObjectCache : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _cacheMutex;
    NSMutableDictionary *_cache;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)description;
+ (id)objectCacheForIdentifier:(id)arg1;
- (id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2;
- (id)cacheObject:(id)arg1;
- (id)cachedObjectForUniqueID:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)removeCachedObject:(id)arg1;

@end

