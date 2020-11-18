//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailCustomPhotosViewControllerDelegate-Protocol.h>

@class NSString, NTKCompanionCustomPhotosEditor, NTKFace, _NTKCFaceDetailCustomPhotosViewController;
@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate>
{
    _NTKCFaceDetailCustomPhotosViewController *_implementationVC;
    NTKFace *_face;
    NTKCompanionCustomPhotosEditor *_editor;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NTKCompanionCustomPhotosEditor *editor; // @synthesize editor=_editor;
@property (strong, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL inGallery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)customPhotosControllerDidFinish:(id)arg1;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 faceView:(id)arg4 externalImagesSet:(BOOL)arg5;

@end

