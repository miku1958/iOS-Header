//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol PUPhotoPickerRemoteNavigationControllerDelegate;

@interface PUPhotoPickerRemoteNavigationController : UINavigationController
{
    id<PUPhotoPickerRemoteNavigationControllerDelegate> _remoteViewControllerDelegate;
}

@property (weak, nonatomic) id<PUPhotoPickerRemoteNavigationControllerDelegate> remoteViewControllerDelegate; // @synthesize remoteViewControllerDelegate=_remoteViewControllerDelegate;

- (void).cxx_destruct;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;

@end

