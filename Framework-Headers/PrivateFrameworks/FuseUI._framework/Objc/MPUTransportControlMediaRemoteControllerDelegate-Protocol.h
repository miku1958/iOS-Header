//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPUTransportControlMediaRemoteController, NSDictionary, NSString, UIViewController;

@protocol MPUTransportControlMediaRemoteControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForLikeBanActionSheetForTransportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1;
- (void)transportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1 requestsPushingMediaRemoteCommand:(unsigned int)arg2 withOptions:(NSDictionary *)arg3 shouldLaunchApplication:(BOOL)arg4;

@optional
- (NSString *)transportControlMediaRemoteController:(MPUTransportControlMediaRemoteController *)arg1 alternateKeyForMediaRemoteNowPlayingInfoKey:(NSString *)arg2;
@end
