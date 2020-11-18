//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSExtension, NSMutableDictionary, NSObject, NSString, UIView, UIViewController;
@protocol OS_dispatch_queue, UINavigationControllerDelegate><UIImagePickerControllerDelegate;

@interface UIImagePickerController : UINavigationController <NSCoding>
{
    long long _sourceType;
    id _image;
    struct CGRect _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarStyle;
    BOOL _previousStatusBarHidden;
    NSObject<OS_dispatch_queue> *_photosExtensionDiscoveryQueue;
    Class _photoPickerRequestOptionsClass;
    CDUnknownBlockType _photoPickerDisplayCompletion;
    CDUnknownBlockType _photoPickerPreviewDisplayCompletion;
    BOOL _photoPickerDidStartDelayingPresentation;
    BOOL _photoPickerDidEndDelayingPresentation;
    BOOL _photoPickerIsPreheating;
    UIViewController *_photoPickerPreheatedViewController;
    CDStruct_d1897728 _imagePickerFlags;
    unsigned long long _savingOptions;
    NSExtension *_photosExtension;
    id _photosExtensionDiscoveryDriver;
    NSString *_initialViewControllerClassName;
}

@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsImageEditing;
@property (nonatomic) long long cameraCaptureMode;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) long long cameraFlashMode;
@property (strong, nonatomic) UIView *cameraOverlayView;
@property (nonatomic) struct CGAffineTransform cameraViewTransform;
@property (weak, nonatomic) id<UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; // @dynamic delegate;
@property (nonatomic) long long imageExportPreset;
@property (copy, nonatomic) NSString *initialViewControllerClassName; // @synthesize initialViewControllerClassName=_initialViewControllerClassName;
@property (copy, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) Class photoPickerRequestOptionsClass;
@property (strong, nonatomic) NSExtension *photosExtension; // @synthesize photosExtension=_photosExtension;
@property (strong, nonatomic) id photosExtensionDiscoveryDriver; // @synthesize photosExtensionDiscoveryDriver=_photosExtensionDiscoveryDriver;
@property (readonly) NSObject<OS_dispatch_queue> *photosExtensionDiscoveryQueue;
@property (nonatomic) BOOL showsCameraControls;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *videoExportPreset;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) long long videoQuality;

+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2;
+ (BOOL)_reviewCapturedItems;
+ (id)availableCaptureModesForCameraDevice:(long long)arg1;
+ (id)availableMediaTypesForSourceType:(long long)arg1;
+ (BOOL)isCameraDeviceAvailable:(long long)arg1;
+ (BOOL)isFlashAvailableForCameraDevice:(long long)arg1;
+ (BOOL)isSourceTypeAvailable:(long long)arg1;
- (void).cxx_destruct;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (BOOL)_allowsImageEditing;
- (BOOL)_allowsIris;
- (BOOL)_allowsMultipleSelection;
- (void)_autoDismiss;
- (id)_cameraViewController;
- (BOOL)_convertAutoloopsToGIF;
- (void)_createInitialControllerWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_didRevertStatusBar;
- (void)_handleEndingPhotoPickerPresentationDelay;
- (void)_handleInstantiatedRemoteViewController:(id)arg1 request:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleMatchingExtensions:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handlePushViewController:(id)arg1;
- (void)_handleTopViewControllerReadyForDisplay:(id)arg1;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (void)_imagePickerDidCompleteWithInfoArray:(id)arg1;
- (unsigned long long)_imagePickerSavingOptions;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)_initializeProperties;
- (void)_invalidatePhotoPickerServices;
- (BOOL)_isCameraCaptureModeValid:(long long)arg1;
- (BOOL)_isPhotoPickerExtensionEnabled;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (unsigned long long)_multipleSelectionLimit;
- (BOOL)_onlyShowAutoloops;
- (CDUnknownBlockType)_photoPickerDisplayCompletion;
- (CDUnknownBlockType)_photoPickerPreviewDisplayCompletion;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)_properties;
- (id)_propertiesForPhotoPickerExtension;
- (void)_removeAllChildren;
- (void)_serializeHandlingMatchingExtensions:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setAllowsImageEditing:(BOOL)arg1;
- (void)_setAllowsIris:(BOOL)arg1;
- (void)_setAllowsMultipleSelection:(BOOL)arg1;
- (void)_setConvertAutoloopsToGIF:(BOOL)arg1;
- (void)_setImagePickerSavingOptions:(unsigned long long)arg1;
- (void)_setMultipleSelectionLimit:(unsigned long long)arg1;
- (void)_setOnlyShowAutoloops:(BOOL)arg1;
- (void)_setPhotoPickerDisplayCompletion:(CDUnknownBlockType)arg1;
- (void)_setPhotoPickerPreviewDisplayCompletion:(CDUnknownBlockType)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setShowsPrompt:(BOOL)arg1;
- (void)_setStaticPrompt:(id)arg1;
- (void)_setTargetForPrompt:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setupControllersForCurrentSourceTypeWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_shouldDelayPresentation;
- (BOOL)_showsPrompt;
- (BOOL)_sourceTypeIsCamera;
- (id)_staticPrompt;
- (id)_targetForPrompt;
- (void)_testPerformPreviewOfFirstPhoto;
- (void)_updateCameraCaptureMode;
- (id)_valueForProperty:(id)arg1;
- (void)_viewControllerPresentationDidInitiate;
- (void)cancelPhotoPicker;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (unsigned long long)supportedInterfaceOrientations;
- (void)takePicture;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;

@end
