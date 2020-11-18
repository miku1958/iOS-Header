//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WebKit/UIDocumentMenuDelegate-Protocol.h>
#import <WebKit/UIDocumentPickerDelegate-Protocol.h>
#import <WebKit/UIImagePickerControllerDelegate-Protocol.h>
#import <WebKit/UINavigationControllerDelegate-Protocol.h>
#import <WebKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, WKContentView;
@protocol WKFileUploadPanelDelegate;

__attribute__((visibility("hidden")))
@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIDocumentMenuDelegate>
{
    WKContentView *_view;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy> _listener;
    RetainPtr_f649c0c3 _mimeTypes;
    struct CGPoint _interactionPoint;
    BOOL _allowMultipleFiles;
    BOOL _usingCamera;
    struct RetainPtr<UIImagePickerController> _imagePicker;
    struct RetainPtr<UIViewController> _presentationViewController;
    struct RetainPtr<UIPopoverController> _presentationPopover;
    struct RetainPtr<UIDocumentMenuViewController> _documentMenuController;
    struct RetainPtr<UIAlertController> _actionSheetController;
    int _mediaCaptureType;
    id<WKFileUploadPanelDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<WKFileUploadPanelDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustMediaCaptureType;
- (id)_cameraButtonLabel;
- (void)_cancel;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_dismissDisplayAnimated:(BOOL)arg1;
- (void)_dispatchDidDismiss;
- (id)_documentPickerMenuMediaTypes;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_photoLibraryButtonLabel;
- (void)_presentFullscreenViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)arg1;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (void)_showDocumentPickerMenu;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)dealloc;
- (void)dismiss;
- (void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2;
- (void)documentMenuWasCancelled:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentWithParameters:(struct OpenPanelParameters *)arg1 resultListener:(struct WebOpenPanelResultListenerProxy *)arg2;

@end

