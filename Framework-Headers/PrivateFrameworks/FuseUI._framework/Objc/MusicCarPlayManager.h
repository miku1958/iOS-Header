//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MCDCarDisplayServiceProvider-Protocol.h>

@class MCDRootController, NSString, RadioRecentStationsController;

@interface MusicCarPlayManager : NSObject <MCDCarDisplayServiceProvider>
{
    MCDRootController *_carDisplayController;
    RadioRecentStationsController *_recentStationsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) RadioRecentStationsController *recentStationsController; // @synthesize recentStationsController=_recentStationsController;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_attachToStarkScreen:(id)arg1;
- (id)_init;
- (void)_screenDidConnectNotification:(id)arg1;
- (void)_screenDidDisconnectNotification:(id)arg1;
- (void)attachToAvailableScreen;
- (void)changeRepeatType:(unsigned long long)arg1;
- (void)changeShuffleType:(unsigned long long)arg1;
- (void)dealloc;
- (void)detachFromScreen;
- (id)init;
- (void)reloadPlayer:(id)arg1 geniusMixPlaylist:(id)arg2 options:(id)arg3;
- (void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3;
- (void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showNowPlaying:(BOOL)arg1;

@end

