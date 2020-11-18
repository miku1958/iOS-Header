//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MediaControlsCollectionViewController, UIViewController;
@protocol MediaControlsCollectionItemViewController;

@protocol MediaControlsCollectionViewDelegate <NSObject>
- (BOOL)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didEndDisplayingViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willDisplayViewController:(UIViewController<MediaControlsCollectionItemViewController> *)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(MediaControlsCollectionViewController *)arg1 willSelectItemAtIndex:(long long)arg2;
@end

