//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SafariServices/EKICSPreviewControllerDelegate-Protocol.h>

@class EKICSPreviewController, NSString, NSURL, UIBarButtonItem;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate>
{
    NSString *_filePath;
    NSURL *_sourceURL;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    EKICSPreviewController *_icsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)_updateNavigationBarItems;
- (void)dealloc;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

