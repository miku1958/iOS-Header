//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUSessionInfoObserver-Protocol.h>

@class NSString, PHCollectionList, PUAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver>
{
    UINavigationController *_contentNavigationController;
    PHCollectionList *_collectionList;
    CDUnknownBlockType _completionHandler;
    PUAlbumPickerViewControllerSpec *_spec;
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;
    PUAlbumListViewController *__albumListViewController;
}

@property (strong, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController; // @synthesize _albumListViewController=__albumListViewController;
@property (strong, nonatomic) PUAlbumPickerSessionInfo *albumPickerSessionInfo; // @synthesize albumPickerSessionInfo=_albumPickerSessionInfo;
@property (strong, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) UINavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUAlbumPickerViewControllerSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setContentNavigationController:(id)arg1;
- (void)_setSessionInfo:(id)arg1;
- (void)_setSpec:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;
- (void)loadView;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end

