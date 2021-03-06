//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/UIImagePickerControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface NTKCPhotosAddController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    CDUnknownBlockType _multipleCompletion;
    CDUnknownBlockType _singleCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType multipleCompletion; // @synthesize multipleCompletion=_multipleCompletion;
@property (copy, nonatomic) CDUnknownBlockType singleCompletion; // @synthesize singleCompletion=_singleCompletion;
@property (readonly) Class superclass;

+ (void)_presentAddControllerFromViewController:(id)arg1 multiple:(BOOL)arg2 limit:(unsigned long long)arg3 completion:(id)arg4;
+ (id)_sharedInstance;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_dismiss:(id)arg1 photos:(id)arg2 single:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;

@end

