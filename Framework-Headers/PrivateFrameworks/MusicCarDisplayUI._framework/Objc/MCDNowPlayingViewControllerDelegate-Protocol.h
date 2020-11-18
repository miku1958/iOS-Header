//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicCarDisplayUI/NSObject-Protocol.h>

@class MCDNowPlayingViewController, NSString;

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 buttonShouldBeActive:(long long)arg2;
- (void)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id *)arg3 existingIdentifier:(NSString *)arg4 tinted:(out BOOL *)arg5;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldEnableButton:(long long)arg2;
- (void)nowPlayingViewControllerAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAddToLibrary:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowAlbumLink:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShowMore:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerDidRequestAlbum:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerIsFuseSubscriber:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerMore:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(MCDNowPlayingViewController *)arg1;
@end

