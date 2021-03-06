//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ReplayKit/RPVideoEditorViewControllerDelegate-Protocol.h>

@class NSURL, RPVideoEditorHostViewController;
@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate>
{
    BOOL _wasStatusBarHidden;
    id<RPPreviewViewControllerDelegate> _previewControllerDelegate;
    NSURL *_movieURL;
    RPVideoEditorHostViewController *_hostViewController;
}

@property (strong, nonatomic) RPVideoEditorHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property (strong, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property (weak, nonatomic) id<RPPreviewViewControllerDelegate> previewControllerDelegate; // @synthesize previewControllerDelegate=_previewControllerDelegate;
@property (nonatomic) BOOL wasStatusBarHidden; // @synthesize wasStatusBarHidden=_wasStatusBarHidden;

+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

