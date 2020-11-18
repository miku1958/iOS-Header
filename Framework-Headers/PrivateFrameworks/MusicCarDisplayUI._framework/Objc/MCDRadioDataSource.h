//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/MPUDataSource.h>

#import <MusicCarDisplayUI/RadioPushNotificationControllerDelegate-Protocol.h>

@class MCDRadioPlaybackCoordinator, NSArray, NSString, RadioPushNotificationController;
@protocol MCDRadioDataSourceDelegate;

@interface MCDRadioDataSource : MPUDataSource <RadioPushNotificationControllerDelegate>
{
    id<MCDRadioDataSourceDelegate> _delegate;
    NSArray *_featuredStations;
    BOOL _optedInToRadio;
    RadioPushNotificationController *_pushNotificationController;
    NSArray *_stations;
    NSArray *_userStations;
    MCDRadioPlaybackCoordinator *_playbackCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MCDRadioDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *featuredStations;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isOptedInToRadio) BOOL optedInToRadio;
@property (strong, nonatomic) MCDRadioPlaybackCoordinator *playbackCoordinator; // @synthesize playbackCoordinator=_playbackCoordinator;
@property (readonly, nonatomic) NSArray *stations;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userStations;

+ (BOOL)isOptedInToRadio;
- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)_deauthenticate;
- (void)_invalidateCalculatedEntities;
- (void)_notifyAssistantOfStationChanges;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_radioRequestDidFinishNotification:(id)arg1;
- (void)_reloadOptedInToRadio;
- (void)checkAcceptedTermsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)deauthenticateIfNecessary;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)playbackContextForIndex:(unsigned long long)arg1;
- (void)pushNotificationControllerDidReceiveSyncRequest:(id)arg1 toGlobalVersion:(unsigned long long)arg2;
- (void)refreshFeaturedStations;
- (void)synchronizeStationsAsAutomaticUpdate:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

