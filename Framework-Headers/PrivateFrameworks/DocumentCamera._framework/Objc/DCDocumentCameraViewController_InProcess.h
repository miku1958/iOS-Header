//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentCamera/DCDocumentCameraViewController.h>

#import <DocumentCamera/ICDocCamViewControllerDelegate-Protocol.h>

@class ICDocCamViewController, NSString;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController <ICDocCamViewControllerDelegate>
{
    ICDocCamViewController *_viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) ICDocCamViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)_autoDismiss;
- (long long)_preferredModalPresentationStyle;
- (void)didReceiveMemoryWarning;
- (BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4;
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)scanDataDelegateWithIdentifier:(id)arg1;

@end

