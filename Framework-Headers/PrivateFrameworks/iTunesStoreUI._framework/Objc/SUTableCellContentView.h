//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <iTunesStoreUI/SUCellConfigurationView-Protocol.h>

@class NSMutableArray, NSString, SUCellConfiguration, UIBezierPath;

@interface SUTableCellContentView : UIView <SUCellConfigurationView>
{
    int _clipCorners;
    UIBezierPath *_clipPath;
    SUCellConfiguration *_configuration;
    unsigned int _drawAsDisabled:1;
    unsigned int _highlighted:1;
    unsigned int _highlightsOnlyContentView:1;
    UIView *_overlayView;
    NSMutableArray *_subviews;
    unsigned int _useSubviewLayout:1;
}

@property (nonatomic) int clipCorners; // @synthesize clipCorners=_clipCorners;
@property (strong, nonatomic) SUCellConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeleteConfirmationVisible) BOOL deleteConfirmationVisisble;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawAsDisabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL highlightsOnlyContentView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSubviews;

- (id)_clipPath;
- (id)_clippedImageForImage:(id)arg1;
- (void)_reloadSubviewAlphasAnimated:(BOOL)arg1;
- (void)_reloadSubviewsForConfiguration;
- (void)_removeSubviewsForConfiguration;
- (id)_scriptingInfo;
- (void)_startUsingSubviewLayout;
- (void)_stopUsingSubviewLayout;
- (void)_updateDisabledStyleForSubviews;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUsesSubviews:(BOOL)arg1 animated:(BOOL)arg2;

@end

