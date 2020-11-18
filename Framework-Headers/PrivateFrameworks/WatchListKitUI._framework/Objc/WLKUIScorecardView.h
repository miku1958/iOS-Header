//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage;
@protocol WLKUIScorecardViewDelegate;

@interface WLKUIScorecardView : UIView
{
    BOOL _didCalculatedSize;
    BOOL _delegateRespondsToBackgroundImageForScorecardViewMaterial;
    BOOL _delegateRespondsToBackgroundBlendModeForElementInRowAtIndex;
    id<WLKUIScorecardViewDelegate> _delegate;
    double _interitemSpacing;
    double _rowSpacing;
    NSArray *_rowElementSizes;
    NSArray *_columnWidths;
    UIImage *_darkMaterialImage;
    struct CGSize _scorecardSize;
}

@property (strong, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property (strong, nonatomic) UIImage *darkMaterialImage; // @synthesize darkMaterialImage=_darkMaterialImage;
@property (weak, nonatomic) id<WLKUIScorecardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL delegateRespondsToBackgroundBlendModeForElementInRowAtIndex; // @synthesize delegateRespondsToBackgroundBlendModeForElementInRowAtIndex=_delegateRespondsToBackgroundBlendModeForElementInRowAtIndex;
@property (nonatomic) BOOL delegateRespondsToBackgroundImageForScorecardViewMaterial; // @synthesize delegateRespondsToBackgroundImageForScorecardViewMaterial=_delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property (nonatomic) BOOL didCalculatedSize; // @synthesize didCalculatedSize=_didCalculatedSize;
@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (strong, nonatomic) NSArray *rowElementSizes; // @synthesize rowElementSizes=_rowElementSizes;
@property (nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property (nonatomic) struct CGSize scorecardSize; // @synthesize scorecardSize=_scorecardSize;

- (void).cxx_destruct;
- (void)_calculateColumnSpacing;
- (struct CGSize)_calculateMetricsOfScorecard;
- (id)_darkMaterialColor;
- (id)_darkMaterialImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)invalidateData;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
