//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressReporting-Protocol.h>

@class NSBundle, NSProgress, NSSet, NSString;

@interface NSBundleResourceRequest : NSObject <NSProgressReporting>
{
    NSSet *_tags;
    double _priority;
    NSBundle *_bundle;
    NSProgress *_progress;
    long long _fetchState;
}

@property (readonly) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double loadingPriority;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *tags;

+ (void)_addExtensionEndpoint:(id)arg1;
+ (id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2;
+ (id)_connection;
+ (id)_extensionEndpoint;
+ (id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1;
+ (void)_flushCacheForBundle:(id)arg1;
+ (id)_manifestWithBundle:(id)arg1 error:(id *)arg2;
+ (void)_setConnection:(id)arg1;
- (void)beginAccessingResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)conditionallyBeginAccessingResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)endAccessingResources;
- (id)init;
- (id)initWithTag:(id)arg1;
- (id)initWithTags:(id)arg1;
- (id)initWithTags:(id)arg1 bundle:(id)arg2;

@end

