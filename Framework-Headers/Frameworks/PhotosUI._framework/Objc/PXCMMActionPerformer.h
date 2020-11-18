//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionPerformer.h>

@class NSProgress, PXCMMSession;
@protocol PXCMMActionPerformerDelegate;

@interface PXCMMActionPerformer : PXActionPerformer
{
    PXCMMSession *_session;
    NSProgress *_progress;
}

@property (weak, nonatomic) id<PXCMMActionPerformerDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;

+ (id)actionPerformerLog;
- (void).cxx_destruct;
- (BOOL)canPerformActionWithSession:(id)arg1;
- (id)createActionProgress;
- (id)performActionWithSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

