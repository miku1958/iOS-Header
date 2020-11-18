//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UINavigationController.h>

#import <UIKitCore/_UIDocumentPickerExtensionViewController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController>
{
    BOOL _hasSetInitialNavigationItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void)_documentPickerDidDismiss;
- (void)_doneButton:(id)arg1;
- (void)_locationsMenu:(id)arg1;
- (void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setPickableTypes:(id)arg1;
- (void)_setPickerMode:(unsigned long long)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setUploadURLWrapper:(id)arg1;
- (void)_updateNavigationItem;
- (id)hostingViewController;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;

@end

