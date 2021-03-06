//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFActionUserInterface.h>

#import <ActionKitUI/UIImagePickerControllerDelegate-Protocol.h>
#import <ActionKitUI/UINavigationControllerDelegate-Protocol.h>
#import <ActionKitUI/WFTakePhotoActionUserInterface-Protocol.h>

@class NSMutableArray, NSString, WFContentCollection;

__attribute__((visibility("hidden")))
@interface WFTakePhotoActionUIKitUserInterface : WFActionUserInterface <UIImagePickerControllerDelegate, UINavigationControllerDelegate, WFTakePhotoActionUserInterface>
{
    CDUnknownBlockType _completionHandler;
    WFContentCollection *_outputCollection;
    unsigned long long _remainingPhotos;
    NSMutableArray *_outputImages;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WFContentCollection *outputCollection; // @synthesize outputCollection=_outputCollection;
@property (strong, nonatomic) NSMutableArray *outputImages; // @synthesize outputImages=_outputImages;
@property (nonatomic) unsigned long long remainingPhotos; // @synthesize remainingPhotos=_remainingPhotos;
@property (readonly) Class superclass;

+ (long long)cameraDeviceFromString:(id)arg1;
- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWithError:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)showWithPhotoCount:(unsigned long long)arg1 device:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

