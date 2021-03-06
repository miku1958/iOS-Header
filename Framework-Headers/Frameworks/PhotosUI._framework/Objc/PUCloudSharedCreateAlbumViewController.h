//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, PUPhotoStreamRecipientViewController, UINavigationItem;
@protocol PUCloudSharedCreateAlbumViewControllerDelegate;

@interface PUCloudSharedCreateAlbumViewController : UIViewController
{
    UINavigationItem *_navItem;
    PUPhotoStreamRecipientViewController *_composeRecipientController;
    id<PUCloudSharedCreateAlbumViewControllerDelegate> _delegate;
    NSString *_nextButtonTitle;
    NSArray *__albumRecipients;
}

@property (strong, nonatomic, setter=_setAlbumRecipients:) NSArray *_albumRecipients; // @synthesize _albumRecipients=__albumRecipients;
@property (readonly, nonatomic) NSArray *albumRecipients;
@property (weak, nonatomic) id<PUCloudSharedCreateAlbumViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;

- (void).cxx_destruct;
- (void)_cancelAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_handleCompletionWithSuccess:(BOOL)arg1;
- (void)_saveUserEnterredInfo;
- (BOOL)_validateRecipientsToAdd:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)navigationItem;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end

