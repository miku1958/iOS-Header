//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PUPhotoView, PUPhotosZoomingSharingGridCell, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingGridCell : UICollectionViewCell
{
    PUPhotoView *_photoView;
    UIView *_highlightOverlayView;
    struct CGPoint _originalZoomPoint;
    struct CGPoint _lastZoomPoint;
    PUPhotosZoomingSharingGridCell *_zoomingCell;
    UIView *_zoomingCellSuperview;
    int _currentImageRequestID;
}

@property (nonatomic) int currentImageRequestID; // @synthesize currentImageRequestID=_currentImageRequestID;
@property (readonly, nonatomic) PUPhotoView *photoView; // @synthesize photoView=_photoView;

- (void).cxx_destruct;
- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;

@end
