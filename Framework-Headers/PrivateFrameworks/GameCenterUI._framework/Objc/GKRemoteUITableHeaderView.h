//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <GameCenterUI/RUIPageAccessory-Protocol.h>

@class GKButton, GKLabel, NSArray, NSDictionary, NSString;
@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory>
{
    int _layoutStyle;
    id<GKRemoteUIAuxiliaryViewDelegate> _delegate;
    double _height;
    GKLabel *_label;
    GKLabel *_subLabel;
    GKButton *_button;
    NSDictionary *_attributes;
    NSArray *_replaceableConstraints;
}

@property (strong, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) GKButton *button; // @synthesize button=_button;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GKRemoteUIAuxiliaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height; // @synthesize height=_height;
@property (strong, nonatomic) GKLabel *label; // @synthesize label=_label;
@property (nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (strong, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property (strong, nonatomic) GKLabel *subLabel; // @synthesize subLabel=_subLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyConstraints;
- (double)bottomMargin;
- (void)buttonTapped:(id)arg1;
- (void)createButtonWithAttributes:(id)arg1;
- (void)createLabelWithAttributes:(id)arg1;
- (void)createSubLabelWithAttributes:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)labelBaselineOffset;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelTopOffset;
- (double)leftMargin;
- (void)objectModelDidChange:(id)arg1;
- (double)rightMargin;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

