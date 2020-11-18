//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUImportOneUpCell.h>

#import <PhotosUI/PUImportOneUpCellDisplayDelegate-Protocol.h>

@class NSArray, PUImportMediaProvider, PUImportOneUpCellBadgeView, UIImage;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionView : PUImportOneUpCell <PUImportOneUpCellDisplayDelegate>
{
    UIImage *_startingImage;
    PUImportMediaProvider *_mediaProvider;
    PUImportOneUpCellBadgeView *_badgeView;
    NSArray *_badgeViewOffsetConstraints;
    double _initialPhotoViewAlpha;
    double _targetPhotoViewAlpha;
    struct CGRect _initialFrame;
    struct CGRect _targetFrame;
}

@property (readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property (readonly, nonatomic) NSArray *badgeViewOffsetConstraints; // @synthesize badgeViewOffsetConstraints=_badgeViewOffsetConstraints;
@property (nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property (nonatomic) double initialPhotoViewAlpha; // @synthesize initialPhotoViewAlpha=_initialPhotoViewAlpha;
@property (strong, nonatomic) PUImportMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (strong, nonatomic) UIImage *startingImage; // @synthesize startingImage=_startingImage;
@property (nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property (nonatomic) double targetPhotoViewAlpha; // @synthesize targetPhotoViewAlpha=_targetPhotoViewAlpha;

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;
- (void).cxx_destruct;
- (void *)contextForObservingViewModelChanges;
- (double)currentProgress;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)updateAlphaIfNeeded;
- (void)updateBadgeView;
- (void)updateConstraints;

@end

