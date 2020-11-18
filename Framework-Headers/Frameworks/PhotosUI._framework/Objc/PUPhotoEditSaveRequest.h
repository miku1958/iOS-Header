//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXRunNodeDelegate-Protocol.h>

@class NSArray, NSString, PHAsset, PHContentEditingOutput, PLPhotoEditModel, PUPhotoEditIrisModel, PUPhotoKitAdjustmentSaveNode, PUVideoCompositionExportNode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSaveRequest : NSObject <PXRunNodeDelegate>
{
    CDUnknownBlockType _completionHandler;
    double _beginTimestamp;
    PUPhotoKitAdjustmentSaveNode *_outputNode;
    PUVideoCompositionExportNode *_videoExportNode;
    int _identifier;
    PHAsset *_photo;
    PLPhotoEditModel *_editModel;
    PUPhotoEditIrisModel *_irisModel;
    PHContentEditingOutput *_contentEditingOutput;
    long long _workImageVersion;
    long long _currentState;
    NSArray *__runGraph;
}

@property (copy, nonatomic, setter=_setRunGraph:) NSArray *_runGraph; // @synthesize _runGraph=__runGraph;
@property (readonly, nonatomic) PHContentEditingOutput *contentEditingOutput; // @synthesize contentEditingOutput=_contentEditingOutput;
@property (readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) PLPhotoEditModel *editModel; // @synthesize editModel=_editModel;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) PUPhotoEditIrisModel *irisModel; // @synthesize irisModel=_irisModel;
@property (readonly, nonatomic) PHAsset *photo; // @synthesize photo=_photo;
@property (readonly, nonatomic) double progress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsProgress;
@property (readonly, nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;

- (void).cxx_destruct;
- (void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_handleOutputNodeFinishedWithError:(id)arg1;
- (long long)_imageRequestVersion;
- (void)_performRevertToOriginalOperation;
- (void)_performSaveContentEditingOutput;
- (void)_performSaveEditsOperation;
- (BOOL)_requiresVideoRender;
- (void)_transitionToState:(long long)arg1;
- (long long)_videoRequestVersion;
- (void)beginSaveOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelSaveOperation;
- (id)init;
- (id)initWithPhoto:(id)arg1 contentEditingOutput:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 contentEditingOutput:(id)arg3 workImageVersion:(long long)arg4 irisEditModel:(id)arg5;
- (id)initWithPhoto:(id)arg1 editModel:(id)arg2 workImageVersion:(long long)arg3 irisEditModel:(id)arg4;
- (id)initWithPhotoToRevertToOriginal:(id)arg1;
- (void)runNode:(id)arg1 didCancelWithError:(id)arg2;
- (void)runNode:(id)arg1 didCompleteWithError:(id)arg2;

@end

