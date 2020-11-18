//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@class CLKFont, NSArray, NTKColoringLabel, NTKUpNextImageView, UILayoutGuide;

@interface NTKUpNextLargeTextCell : NTKUpNextBaseCell
{
    BOOL _showingHeaderImage;
    BOOL _showingBodyImage;
    unsigned int _currentImageEdge;
    CLKFont *_standardBodyFont;
    CLKFont *_monospaceBodyFont;
    UILayoutGuide *_contentLayoutGuide;
    NTKUpNextImageView *_headerImage;
    NTKUpNextImageView *_bodyImage;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_bodyLabel;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_bodyWithLeftImageConstraints;
    NSArray *_bodyWithNoImageConstraints;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end

