//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURL;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying>
{
    struct ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;
}

@property (copy, nonatomic) NSString *CTDataConnectionServiceType;
@property (readonly) struct Object *_apiObject;
@property (copy, nonatomic) NSArray *additionalReadAccessAllowedURLs;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses;
@property (copy, nonatomic) NSArray *alwaysRevalidatedURLSchemes;
@property (nonatomic) BOOL alwaysRunsAtBackgroundPriority;
@property (copy, nonatomic) NSArray *cachePartitionedURLSchemes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long diskCacheSizeOverride;
@property (nonatomic) BOOL diskCacheSpeculativeValidationEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting;
@property (copy, nonatomic) NSURL *injectedBundleURL;
@property (nonatomic) unsigned long long maximumProcessCount;
@property (nonatomic) BOOL pageCacheEnabled;
@property (nonatomic) int presentingApplicationPID;
@property (nonatomic) BOOL processSwapsOnNavigation;
@property (nonatomic) BOOL processSwapsOnWindowOpenWithOpener;
@property (nonatomic) BOOL shouldCaptureAudioInUIProcess;
@property (nonatomic) BOOL shouldTakeUIBackgroundAssertion;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesConnectionTerminationOnSystemChange;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

