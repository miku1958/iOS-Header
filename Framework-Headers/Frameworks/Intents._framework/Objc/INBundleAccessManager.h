//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject
{
    struct {
        unsigned int _requestCount;
        unsigned int _securityScopeCacheHitCount;
        unsigned int _accessibleCacheHitCount;
        unsigned int _cacheMissCount;
        unsigned int _imageServiceLoadCount;
    } _stats;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_securityScopedURLs;
    NSMutableSet *_accessibleBundleIDs;
}

@property (readonly, nonatomic) NSMutableSet *accessibleBundleIDs; // @synthesize accessibleBundleIDs=_accessibleBundleIDs;
@property (readonly, nonatomic) NSMutableDictionary *securityScopedURLs; // @synthesize securityScopedURLs=_securityScopedURLs;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_grantForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (id)_stats;
- (id)grantForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)grantForBundleIdentifiers:(id)arg1 error:(id *)arg2;
- (id)init;

@end
