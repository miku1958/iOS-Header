//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <UIKitCore/_UIScreenRoutePickerRemoteViewControllerHost-Protocol.h>

@class NSExtension, NSString, _UIScreenRoutePickerViewController;
@protocol NSCopying><NSObject;

__attribute__((visibility("hidden")))
@interface _UIScreenRoutePickerRemoteViewController : _UIRemoteViewController <_UIScreenRoutePickerRemoteViewControllerHost>
{
    _UIScreenRoutePickerViewController *_publicController;
    NSExtension *_extension;
    id<NSCopying><NSObject> _extensionRequestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property (copy, nonatomic) id<NSCopying><NSObject> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) _UIScreenRoutePickerViewController *publicController; // @synthesize publicController=_publicController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)invalidate;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
