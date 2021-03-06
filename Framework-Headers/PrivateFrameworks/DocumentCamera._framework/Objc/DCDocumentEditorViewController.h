//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <DocumentCamera/ICDocCamExtractedDocumentControllerDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamViewControllerDelegate-Protocol.h>
#import <DocumentCamera/UINavigationControllerDelegate-Protocol.h>
#import <DocumentCamera/UIViewControllerTransitioningDelegate-Protocol.h>

@class ICDocCamDocumentInfoCollection, ICDocCamExtractedDocumentViewController, ICDocCamImageCache, NSIndexPath, NSString, UIImage, UIView, VNDocumentCameraScan;
@protocol DCDocumentEditorViewControllerDelegate;

@interface DCDocumentEditorViewController : UINavigationController <ICDocCamExtractedDocumentControllerDelegate, ICDocCamViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _useCustomRecropTransition;
    ICDocCamExtractedDocumentViewController *_extractedDocumentController;
    id<DCDocumentEditorViewControllerDelegate> _docCamDelegate;
    VNDocumentCameraScan *_scannedDocument;
    ICDocCamDocumentInfoCollection *_docInfoCollection;
    ICDocCamImageCache *_imageCache;
    long long _orientationForRecrop;
    NSIndexPath *_indexPathForRecrop;
    UIImage *_filteredImageForRecrop;
    UIImage *_unfilteredImageForRecrop;
    UIView *_sourceViewForZoomTransition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<DCDocumentEditorViewControllerDelegate> docCamDelegate; // @synthesize docCamDelegate=_docCamDelegate;
@property (strong, nonatomic) ICDocCamDocumentInfoCollection *docInfoCollection; // @synthesize docInfoCollection=_docInfoCollection;
@property (strong, nonatomic) ICDocCamExtractedDocumentViewController *extractedDocumentController; // @synthesize extractedDocumentController=_extractedDocumentController;
@property (strong, nonatomic) UIImage *filteredImageForRecrop; // @synthesize filteredImageForRecrop=_filteredImageForRecrop;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property (strong, nonatomic) NSIndexPath *indexPathForRecrop; // @synthesize indexPathForRecrop=_indexPathForRecrop;
@property (nonatomic) long long orientationForRecrop; // @synthesize orientationForRecrop=_orientationForRecrop;
@property (strong, nonatomic) VNDocumentCameraScan *scannedDocument; // @synthesize scannedDocument=_scannedDocument;
@property (strong, nonatomic) UIView *sourceViewForZoomTransition; // @synthesize sourceViewForZoomTransition=_sourceViewForZoomTransition;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImage *unfilteredImageForRecrop; // @synthesize unfilteredImageForRecrop=_unfilteredImageForRecrop;
@property (nonatomic) BOOL useCustomRecropTransition; // @synthesize useCustomRecropTransition=_useCustomRecropTransition;

+ (id)activityTypeOrder;
+ (id)docInfoCollectionFromScannedDocument:(id)arg1 imageCache:(id)arg2;
+ (BOOL)isAvailable;
- (void).cxx_destruct;
- (void)_autoDismiss;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (BOOL)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4;
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(BOOL)arg4 closeViewController:(BOOL)arg5;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (void)documentCameraControllerDidCancel:(id)arg1;
- (id)documentCameraControllerImageCache;
- (void)extractedDocumentController:(id)arg1 didTapRecrop:(id)arg2 index:(long long)arg3;
- (void)extractedDocumentController:(id)arg1 shareDocument:(id)arg2 sender:(id)arg3;
- (void)extractedDocumentControllerDidChangeTitle:(id)arg1;
- (void)extractedDocumentControllerDidSelectCopyFromMenuForDocument:(id)arg1;
- (void)extractedDocumentControllerDidSelectShareFromMenuForDocument:(id)arg1 sourceRect:(struct CGRect)arg2 sourceView:(id)arg3;
- (void)extractedDocumentControllerDidTapAddImage;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1;
- (void)extractedDocumentControllerDidTapDone:(unsigned long long)arg1 scanDataDelegate:(id)arg2;
- (void)extractedDocumentControllerDidTapRetake:(unsigned long long)arg1;
- (void)extractedDocumentControllerDiscardMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerMarkupModelDataForDocument:(id)arg1;
- (id)extractedDocumentControllerTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 scannedDocument:(id)arg2;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)scanDataDelegateWithIdentifier:(id)arg1;
- (void)viewDidLoad;

@end

