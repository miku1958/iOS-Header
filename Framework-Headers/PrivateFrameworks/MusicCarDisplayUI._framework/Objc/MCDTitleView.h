//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILabel;

@interface MCDTitleView : UIView
{
    NSLayoutConstraint *_titlePaddingConstraint;
    NSLayoutConstraint *_titleRightEdgeConstraint;
    BOOL _explicitTrack;
    BOOL _shouldUseMusicExplicitGlyph;
    UILabel *_titleLabel;
    UILabel *_explicitLabel;
}

@property (strong, nonatomic) UILabel *explicitLabel; // @synthesize explicitLabel=_explicitLabel;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property (nonatomic) BOOL shouldUseMusicExplicitGlyph; // @synthesize shouldUseMusicExplicitGlyph=_shouldUseMusicExplicitGlyph;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)_addLabelWithFont:(id)arg1;
- (void)_updateExplicitTreatmentString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

