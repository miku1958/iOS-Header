//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/_NSBundleODRDataCommon.h>

@class NSDictionary, NSError, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon
{
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSError *_stashedError;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}

+ (void)_flushCacheForBundle:(id)arg1;
+ (id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2;
- (BOOL)_waitForDaemon;
- (void)addExtensionEndpoint:(id)arg1;
- (BOOL)assetPacksBecameAvailable:(id)arg1 error:(id *)arg2;
- (BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (id)stashedError;

@end
