//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface CAMSlashMaskView : UIView
{
    struct CGRect _slashBounds;
}

@property (readonly, nonatomic) CAShapeLayer *_shapeLayer;
@property (nonatomic) struct CGRect slashBounds; // @synthesize slashBounds=_slashBounds;

+ (Class)layerClass;
- (void)_updateShapeLayerAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSlashBounds:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMaskAnimated;

@end

