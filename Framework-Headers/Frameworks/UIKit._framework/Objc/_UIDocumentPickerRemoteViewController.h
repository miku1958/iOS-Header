//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIDocumentPickerServiceInvalidating-Protocol.h>
#import <UIKitCore/_UIDocumentPickerViewControllerHost-Protocol.h>

@class NSString, UIViewController;
@protocol _UIDocumentPickerRemoteViewControllerContaining;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating>
{
    UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *_publicController;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) UIViewController<_UIDocumentPickerRemoteViewControllerContaining> *publicController; // @synthesize publicController=_publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_didSelectPicker;
- (void)_didSelectURLBookmark:(id)arg1;
- (void)_didSelectURLWrapper:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)_tintColorDidChangeToColor:(id)arg1;
- (void)invalidate;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

