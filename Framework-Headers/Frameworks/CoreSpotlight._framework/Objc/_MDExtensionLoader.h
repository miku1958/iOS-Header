//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _MDExtensionLoader : NSObject
{
    BOOL _extensionsCacheNeedsLoad;
    id _matchingContext;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_extensionsByBundleId;
    NSDictionary *_fileProviderBundleMap;
    NSMutableArray *_containerPaths;
    NSMutableArray *_queueLabels;
    NSMutableArray *_containerIDs;
    NSMutableArray *_extensionIdentifiers;
    long long _notificationCount;
}

@property (strong, nonatomic) NSMutableArray *containerIDs; // @synthesize containerIDs=_containerIDs;
@property (strong, nonatomic) NSMutableArray *containerPaths; // @synthesize containerPaths=_containerPaths;
@property (strong, nonatomic) NSMutableArray *extensionIdentifiers; // @synthesize extensionIdentifiers=_extensionIdentifiers;
@property (strong, nonatomic) NSDictionary *extensionsByBundleId; // @synthesize extensionsByBundleId=_extensionsByBundleId;
@property BOOL extensionsCacheNeedsLoad; // @synthesize extensionsCacheNeedsLoad=_extensionsCacheNeedsLoad;
@property (strong, nonatomic) NSDictionary *fileProviderBundleMap; // @synthesize fileProviderBundleMap=_fileProviderBundleMap;
@property (strong, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property (nonatomic) long long notificationCount; // @synthesize notificationCount=_notificationCount;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSMutableArray *queueLabels; // @synthesize queueLabels=_queueLabels;

- (void).cxx_destruct;
- (void)findExtensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(CDUnknownBlockType)arg1;
- (void)stopLookingForExtensions;

@end
