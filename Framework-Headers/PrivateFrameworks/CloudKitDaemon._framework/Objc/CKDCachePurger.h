//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKDCachePurger : NSObject
{
    BOOL _purged;
    NSArray *_oldCacheDirs;
}

@property (readonly, nonatomic) NSArray *oldCacheDirs; // @synthesize oldCacheDirs=_oldCacheDirs;
@property (nonatomic) BOOL purged; // @synthesize purged=_purged;

+ (id)enumerateOldCachesForApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachesPath:(id)arg4;
- (void).cxx_destruct;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerPath:(id)arg3 cachePath:(id)arg4;
- (void)purgeOldCacheDirectories;

@end
