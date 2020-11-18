//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUAlbumListViewController, PUAlbumListViewControllerSpec, PUFeedViewControllerSpec, PUZoomableGridViewControllerSpec;

@interface PUTabbedLibraryViewControllerSpec : NSObject
{
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
    PUAlbumListViewController *_createAlbumListViewController;
    PUAlbumListViewController *_createSharedAlbumListViewController;
    PUZoomableGridViewControllerSpec *_zoomableGridViewControllerSpec;
    PUFeedViewControllerSpec *_feedViewControllerSpec;
}

@property (readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // @synthesize albumListViewControllerSpec=_albumListViewControllerSpec;
@property (readonly, nonatomic) PUAlbumListViewController *createAlbumListViewController; // @synthesize createAlbumListViewController=_createAlbumListViewController;
@property (readonly, nonatomic) PUAlbumListViewController *createSharedAlbumListViewController; // @synthesize createSharedAlbumListViewController=_createSharedAlbumListViewController;
@property (readonly, nonatomic) PUFeedViewControllerSpec *feedViewControllerSpec; // @synthesize feedViewControllerSpec=_feedViewControllerSpec;
@property (readonly, nonatomic) PUZoomableGridViewControllerSpec *zoomableGridViewControllerSpec; // @synthesize zoomableGridViewControllerSpec=_zoomableGridViewControllerSpec;

- (void).cxx_destruct;

@end

