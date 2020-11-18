//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MPRemoteMediaPickerController, NSString, _UIAsyncInvocation;
@protocol MPMediaPickerControllerDelegate;

@interface MPMediaPickerController : UIViewController
{
    _UIAsyncInvocation *_cancelRequest;
    id _modalContext;
    MPRemoteMediaPickerController *_remoteViewController;
    BOOL _allowsPickingMultipleItems;
    BOOL _showsCloudItems;
    BOOL _showsItemsWithProtectedAssets;
    unsigned long long _mediaTypes;
    id<MPMediaPickerControllerDelegate> _delegate;
    NSString *_prompt;
}

@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (weak, nonatomic) id<MPMediaPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets;

+ (void)preheatMediaPicker;
- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_forceDismissal;
- (BOOL)_hasAddedRemoteView;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_sendSettingsToService;
- (id)_serviceViewControllerProxy;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaTypes:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end

