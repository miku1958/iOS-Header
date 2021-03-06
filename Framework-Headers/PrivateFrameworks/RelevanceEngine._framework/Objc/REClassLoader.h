//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray;
@protocol REClassLoaderConfiguration;

@interface REClassLoader : NSObject <NSCopying>
{
    NSArray *_cachedDataSources;
    NSArray *_cachedBundleConfigurations;
    struct os_unfair_lock_s _loadingLock;
    id<REClassLoaderConfiguration> _configuration;
}

@property (readonly, nonatomic) id<REClassLoaderConfiguration> configuration; // @synthesize configuration=_configuration;

+ (id)groupLoaderWithLoaders:(id)arg1;
+ (id)loaderWithBlock:(CDUnknownBlockType)arg1 configuration:(id)arg2;
+ (id)loaderWithDirectories:(id)arg1 dataSourceKey:(id)arg2 configuration:(id)arg3;
+ (id)loaderWithObjects:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (void)_enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)_enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateBundleConfigurations:(CDUnknownBlockType)arg1;
- (void)enumerateClassesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)prewarm;

@end

