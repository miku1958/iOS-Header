//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXRunNodeDelegate-Protocol.h>

@class NSString, NSURL, PHContentEditingOutput, PICompositionController, PUEditableMediaProvider, PUPhotoEditIrisModel, PUReviewCreateAssetNode, PUVideoExportNode;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUSaveReviewAssetRequest : NSObject <PXRunNodeDelegate>
{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PUReviewCreateAssetNode *_outputNode;
    PUVideoExportNode *_videoExportNode;
    int _identifier;
    id<PUEditableAsset> _editableAsset;
    PUEditableMediaProvider *_editableMediaProvider;
    NSURL *_directory;
    PICompositionController *_compositionController;
    PUPhotoEditIrisModel *_irisModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
}

@property (readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property (readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *directory; // @synthesize directory=_directory;
@property (readonly, nonatomic) id<PUEditableAsset> editableAsset; // @synthesize editableAsset=_editableAsset;
@property (readonly, nonatomic) PUEditableMediaProvider *editableMediaProvider; // @synthesize editableMediaProvider=_editableMediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // @synthesize irisModel=_irisModel;
@property (readonly, nonatomic) double progress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithAsset:(id)arg1 error:(id)arg2;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (long long)_imageRequestVersion;
- (void)_performInternalSaveOperation;
- (void)_performSaveOperation;
- (BOOL)_requiresVideoRender;
- (void)_transitionToState:(long long)arg1;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelSaveOperation;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 compositionController:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 contentEditingOutput:(id)arg4 workImageVersion:(long long)arg5 irisEditModel:(id)arg6;
- (id)initWithAssetForCopying:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3 resourceURL:(id)arg4 contentEditingOutput:(id)arg5 workImageVersion:(long long)arg6 irisEditModel:(id)arg7;
- (id)initWithAssetForRevertToOriginal:(id)arg1 mediaProvider:(id)arg2 directory:(id)arg3;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;

@end
