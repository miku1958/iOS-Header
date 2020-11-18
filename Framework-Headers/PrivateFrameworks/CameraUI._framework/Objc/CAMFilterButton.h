//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface CAMFilterButton : UIButton
{
    long long _orientation;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

+ (id)filterButton;
- (void)_commonCAMFilterButtonInitialization;
- (id)_filterImage;
- (id)_filterOnImage;
- (double)_selectedIndicatorAlpha;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;

@end
