//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicEntityViewDescriptor.h>

@class MPULayoutInterpolator;

@interface MusicEntityCollectionViewDescriptor : MusicEntityViewDescriptor
{
    BOOL _showsSectionHeaders;
    BOOL _shouldFlattenToSingleSectionInRegularWidthAndHeight;
    BOOL _shouldShowOnlyFirstRowOfContent;
    double _sectionHeaderBottomContentInset;
    MPULayoutInterpolator *_lateralContentInsetFromCollectionViewContainerWidthInterpolator;
    MPULayoutInterpolator *_verticalLockupWidthFromCollectionViewWidthInterpolator;
    MPULayoutInterpolator *_textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator;
}

@property (copy, nonatomic) MPULayoutInterpolator *lateralContentInsetFromCollectionViewContainerWidthInterpolator; // @synthesize lateralContentInsetFromCollectionViewContainerWidthInterpolator=_lateralContentInsetFromCollectionViewContainerWidthInterpolator;
@property (nonatomic) double sectionHeaderBottomContentInset; // @synthesize sectionHeaderBottomContentInset=_sectionHeaderBottomContentInset;
@property (nonatomic) BOOL shouldFlattenToSingleSectionInRegularWidthAndHeight; // @synthesize shouldFlattenToSingleSectionInRegularWidthAndHeight=_shouldFlattenToSingleSectionInRegularWidthAndHeight;
@property (nonatomic) BOOL shouldShowOnlyFirstRowOfContent; // @synthesize shouldShowOnlyFirstRowOfContent=_shouldShowOnlyFirstRowOfContent;
@property (nonatomic) BOOL showsSectionHeaders; // @synthesize showsSectionHeaders=_showsSectionHeaders;
@property (copy, nonatomic) MPULayoutInterpolator *textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator; // @synthesize textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator=_textLateralEdgePaddingFromInteritemSpacingLayoutInterpolator;
@property (copy, nonatomic) MPULayoutInterpolator *verticalLockupWidthFromCollectionViewWidthInterpolator; // @synthesize verticalLockupWidthFromCollectionViewWidthInterpolator=_verticalLockupWidthFromCollectionViewWidthInterpolator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
