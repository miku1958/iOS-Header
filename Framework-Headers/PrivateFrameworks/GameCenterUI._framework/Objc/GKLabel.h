//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKTextStyle, NSString;

@interface GKLabel : UILabel <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    BOOL _shouldEnforcePreferredWidth;
    BOOL _usingAttributedText;
    BOOL _shouldInhibitReplay;
    double _actualFontShrinkageFactor;
}

@property (nonatomic) double actualFontShrinkageFactor; // @synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor;
@property (strong, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
@property (strong, nonatomic) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldEnforcePreferredWidth; // @synthesize shouldEnforcePreferredWidth=_shouldEnforcePreferredWidth;
@property (nonatomic) BOOL shouldInhibitReplay; // @synthesize shouldInhibitReplay=_shouldInhibitReplay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usingAttributedText; // @synthesize usingAttributedText=_usingAttributedText;

+ (void)initialize;
- (void)applyTextStyle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)replayAndApplyStyleUnlessInhibited;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (struct CGSize)shrinkFontToFitSize:(struct CGSize)arg1;
- (void)shrinkFontToFitWidth;
- (void)updateConstraints;

@end
