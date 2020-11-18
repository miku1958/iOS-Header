//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIRelatedPlaceholderTile.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController, UIActivityIndicatorView, UILabel;

@interface PXUIRelatedActivityIndicatorTile : PXUIRelatedPlaceholderTile <PXChangeObserver>
{
    BOOL _animating;
    PXPhotoAnalysisStatusController *_statusController;
    UIActivityIndicatorView *__activityIndicatorView;
    UILabel *__label;
}

@property (readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // @synthesize _activityIndicatorView=__activityIndicatorView;
@property (readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property (nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXPhotoAnalysisStatusController *statusController; // @synthesize statusController=_statusController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateLabelText;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end

