//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WLKServerConfiguration;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject
{
    BOOL _offLineMode;
    WLKServerConfiguration *_config;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_channelsByBundleID;
}

@property (readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // @synthesize channelsByBundleID=_channelsByBundleID;
@property (readonly, copy, nonatomic) NSDictionary *channelsByID;
@property (readonly, copy, nonatomic) NSArray *orderedChannels;

+ (id)_validiTunesBundles;
+ (BOOL)isItunesBundleID:(id)arg1;
+ (BOOL)isItunesOrFirstPartyBundleID:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)_serverConfiguration;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
- (id)channelIDForBundleID:(id)arg1;
- (id)init;
- (id)initOffline;

@end
