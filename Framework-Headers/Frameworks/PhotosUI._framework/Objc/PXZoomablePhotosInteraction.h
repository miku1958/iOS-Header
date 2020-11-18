//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXZoomablePhotosViewModel;
@protocol PXAnonymousView, PXZoomablePhotosInteractionDelegate;

@interface PXZoomablePhotosInteraction : NSObject
{
    double _currentMagnifyEventScale;
    id _eventMonitor;
    PXZoomablePhotosViewModel *_viewModel;
    NSObject<PXAnonymousView> *_view;
    id<PXZoomablePhotosInteractionDelegate> _delegate;
}

@property (weak, nonatomic) id<PXZoomablePhotosInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *view; // @synthesize view=_view;
@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (BOOL)_pinchInteractionShouldBegin;
- (BOOL)handlePinch:(id)arg1;
- (BOOL)handleTapOnAssetReference:(id)arg1;
- (id)init;
- (id)initWithZoomablePhotosViewModel:(id)arg1 view:(id)arg2;

@end
