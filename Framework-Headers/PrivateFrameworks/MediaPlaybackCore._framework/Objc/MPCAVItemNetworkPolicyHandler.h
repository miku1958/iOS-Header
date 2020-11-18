//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>

@class AVPlayerItem, ICNetworkConstraints, MPAVItem, MPKeyValueObserver, NSString;
@protocol OS_dispatch_queue;

@interface MPCAVItemNetworkPolicyHandler : NSObject <ICEnvironmentMonitorObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPAVItem *_avItem;
    BOOL _hasFinishedLoadingPlayerItem;
    long long _itemType;
    ICNetworkConstraints *_networkConstraints;
    long long _networkType;
    long long _playerItemFileSize;
    MPKeyValueObserver *_playerItemLoadedTimeRangesObserver;
    AVPlayerItem *_playerItem;
    long long _preferredNetworkPolicyType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) ICNetworkConstraints *networkConstraints;
@property (readonly, nonatomic) long long preferredNetworkPolicyType;
@property (readonly) Class superclass;

+ (BOOL)_prefersHighQualityAudioContentForNetworkType:(long long)arg1;
+ (BOOL)_prefersHighQualityVideoContentForNetworkType:(long long)arg1;
- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_applyNetworkPolicyToPlayerItem;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_isMusicCellularStreamingAllowedDidChangeNotification:(id)arg1;
- (BOOL)_updatePlayerItemProperties;
- (BOOL)_updateState;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)initWithInitialItemType:(long long)arg1;
- (void)startEnforcementWithPlayerItem:(id)arg1 fromAVItem:(id)arg2;

@end

