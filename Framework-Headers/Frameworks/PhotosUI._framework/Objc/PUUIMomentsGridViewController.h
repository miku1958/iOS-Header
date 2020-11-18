//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUPhotoPickerSelectionHandler-Protocol.h>
#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>
#import <PhotosUI/PUPhotoPickerTestSupportHandler-Protocol.h>

@class NSArray, NSString, PUUIImagePickerControllerHelper, UIBarButtonItem;
@protocol PUPhotoPicker;

__attribute__((visibility("hidden")))
@interface PUUIMomentsGridViewController : PUPhotosGridViewController <PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler, PUPhotoPickerTestSupportHandler>
{
    UIBarButtonItem *_imagePickerCancelButton;
    UIBarButtonItem *_imagePickerMultipleSelectionDoneButton;
    PUUIImagePickerControllerHelper *__imagePickerControllerHelper;
    BOOL _didDisappear;
    id<PUPhotoPicker> _photoPicker;
    NSArray *__imagePickerMediaTypes;
    double _lastKnownWidth;
    struct UIEdgeInsets _lastKnownSafeAreaInsets;
}

@property (readonly) PUUIImagePickerControllerHelper *_imagePickerControllerHelper;
@property (copy, nonatomic, setter=_setImagePickerMediaTypes:) NSArray *_imagePickerMediaTypes; // @synthesize _imagePickerMediaTypes=__imagePickerMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // @synthesize didDisappear=_didDisappear;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets lastKnownSafeAreaInsets; // @synthesize lastKnownSafeAreaInsets=_lastKnownSafeAreaInsets;
@property (nonatomic) double lastKnownWidth; // @synthesize lastKnownWidth=_lastKnownWidth;
@property (weak, nonatomic) id<PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
@property (readonly, nonatomic) BOOL referenceValuesDidChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (void)_handleImagePickerMultipleSelectionDone:(id)arg1;
- (void)_scrollToBottomIfNeeded;
- (void)_setTitle;
- (BOOL)allowsPeeking;
- (BOOL)canDragIn;
- (BOOL)canDragOut;
- (BOOL)canNavigateToPhotoInteractively:(BOOL)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out BOOL *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2;
- (void)handleToggleSelectionOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithSpec:(id)arg1;
- (BOOL)initiallyScrolledToBottom;
- (void)loadView;
- (id)newGridLayout;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performPhotoPickerSelection;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (BOOL)shouldPerformAutomaticContentOffsetAdjustment;
- (BOOL)shouldShowMenu;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

