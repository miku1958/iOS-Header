//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/_PUPickerRemoteUIViewControllerHostInterface-Protocol.h>
#import <PhotosUI/_PUPickerUnavailableUIViewControllerDelegate-Protocol.h>
#import <PhotosUI/_UIRemoteViewControllerContaining-Protocol.h>

@class NSExtension, NSString, PHPickerConfiguration, PUPickerRemoteUIViewController, _UIRemoteViewController;
@protocol NSCopying, PHPickerViewControllerDelegate;

@interface PHPickerViewController : UIViewController <_UIRemoteViewControllerContaining, _PUPickerUnavailableUIViewControllerDelegate, _PUPickerRemoteUIViewControllerHostInterface>
{
    PHPickerConfiguration *_configuration;
    id<PHPickerViewControllerDelegate> _delegate;
    NSExtension *__extension;
    id<NSCopying> __extensionRequestIdentifier;
    PUPickerRemoteUIViewController *__remoteUIViewController;
}

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (strong, nonatomic, setter=_setExtension:) NSExtension *_extension; // @synthesize _extension=__extension;
@property (copy, nonatomic, setter=_setExtensionRequestIdentifier:) id<NSCopying> _extensionRequestIdentifier; // @synthesize _extensionRequestIdentifier=__extensionRequestIdentifier;
@property (strong, nonatomic, setter=_setRemoteUIViewController:) PUPickerRemoteUIViewController *_remoteUIViewController; // @synthesize _remoteUIViewController=__remoteUIViewController;
@property (readonly, copy, nonatomic) PHPickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PHPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrReplaceChildUnavailableUIViewControllerForError:(id)arg1;
- (void)_handleRemoteViewControllerConnection:(id)arg1 extension:(id)arg2 extensionRequestIdentifier:(id)arg3 error:(id)arg4;
- (void)_pickerDidFinishPicking:(id)arg1;
- (void)_pickerUnavailableUIViewController:(id)arg1 cancelButtonTapped:(id)arg2;
- (void)_setup;
- (void)_setupExtension:(id)arg1 error:(id)arg2;
- (void)_setupRemoteViewControllerForExtension:(id)arg1 withExtensionItem:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
