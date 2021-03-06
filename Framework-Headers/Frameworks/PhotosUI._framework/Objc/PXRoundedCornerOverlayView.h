//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        BOOL image;
    } _needsUpdateFlags;
    BOOL _continuousCorners;
    double _cornerRadius;
    unsigned long long _cornersToRound;
    UIColor *_overlayColor;
    double _displayScale;
}

@property (readonly, nonatomic) BOOL continuousCorners; // @synthesize continuousCorners=_continuousCorners;
@property (readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, nonatomic) unsigned long long cornersToRound; // @synthesize cornersToRound=_cornersToRound;
@property (readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property (readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;

- (void).cxx_destruct;
- (void)_invalidateImage;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setContinuousCorners:(BOOL)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setOverlayColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

