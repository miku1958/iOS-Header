//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSDictionary, UIImage, UIImagePickerController;

@protocol UIImagePickerControllerDelegate <NSObject>

@optional
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingImage:(UIImage *)arg2 editingInfo:(NSDictionary *)arg3;
- (void)imagePickerController:(UIImagePickerController *)arg1 didFinishPickingMediaWithInfo:(NSDictionary *)arg2;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)arg1;
@end

