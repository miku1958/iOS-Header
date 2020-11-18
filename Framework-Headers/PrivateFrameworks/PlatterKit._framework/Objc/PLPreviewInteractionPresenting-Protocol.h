//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/NSObject-Protocol.h>

@class PLPreviewInteractionManager, UIView;

@protocol PLPreviewInteractionPresenting <NSObject>

@property (readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property (readonly, nonatomic) PLPreviewInteractionManager *previewInteractionManager;
@property (readonly, nonatomic) UIView *viewForPreview;


@optional
@end

