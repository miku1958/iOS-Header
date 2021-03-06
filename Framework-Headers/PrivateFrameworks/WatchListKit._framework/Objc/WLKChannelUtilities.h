//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, WLKChannelsResponse;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _filtered;
    WLKChannelsResponse *_cachedResponse;
    int _shouldRefreshNotificationToken;
    BOOL _shouldRefresh;
    struct os_unfair_lock_s _shouldRefreshLock;
    NSError *_error;
    NSDictionary *_channelsByBundleID;
}

@property (readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // @synthesize channelsByBundleID=_channelsByBundleID;
@property (readonly, copy, nonatomic) NSDictionary *channelsByID;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) BOOL loaded;
@property (readonly, copy, nonatomic) NSArray *orderedChannels;

+ (id)_validiTunesBundles;
+ (BOOL)isItunesBundleID:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceFiltered;
- (void).cxx_destruct;
- (id)_configuration;
- (void)_loadConfigIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)channelIDForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initFiltered:(BOOL)arg1;
- (void)invalidateCache;
- (BOOL)isItunesOrFirstPartyBundleID:(id)arg1;
- (void)loadIfNeededWithCompletion:(CDUnknownBlockType)arg1;

@end

