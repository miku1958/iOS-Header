//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteUI/UIImagePickerControllerDelegate-Protocol.h>
#import <RemoteUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIImage, UIImagePickerController;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImagePickerController *_imagePickerController;
    UIImage *_pickedImage;
    CDUnknownBlockType _pickerCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *pickedImage; // @synthesize pickedImage=_pickedImage;
@property (copy, nonatomic) CDUnknownBlockType pickerCompletion; // @synthesize pickerCompletion=_pickerCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissWithImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)pickImageWithParentController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
