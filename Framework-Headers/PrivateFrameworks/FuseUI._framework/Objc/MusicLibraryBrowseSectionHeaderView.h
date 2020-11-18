//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <FuseUI/MusicActionableHeaderViewDelegate-Protocol.h>

@class MusicActionableHeaderView, NSString, UIColor, UIView, _UIBackdropView;
@protocol MusicLibraryBrowseSectionHeaderViewDelegate;

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate>
{
    MusicActionableHeaderView *_actionableHeaderView;
    _UIBackdropView *_floatingBackdropView;
    UIView *_hairlineView;
    BOOL _shouldSkipLayout;
    NSString *_backdropGroupName;
    UIColor *_backgroundColorForNonFloatingState;
    long long _hairlineStyleForNonFloatingState;
    UIColor *_headerTextColorForNonFloatingState;
    double _topContentInset;
    id<MusicLibraryBrowseSectionHeaderViewDelegate> _delegate;
}

@property (nonatomic, getter=isActionable) BOOL actionable;
@property (copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property (strong, nonatomic) UIColor *backgroundColorForNonFloatingState; // @synthesize backgroundColorForNonFloatingState=_backgroundColorForNonFloatingState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicLibraryBrowseSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long hairlineStyleForNonFloatingState; // @synthesize hairlineStyleForNonFloatingState=_hairlineStyleForNonFloatingState;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *headerText;
@property (strong, nonatomic) UIColor *headerTextColorForNonFloatingState; // @synthesize headerTextColorForNonFloatingState=_headerTextColorForNonFloatingState;
@property (readonly) Class superclass;
@property (nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;

+ (CDStruct_4a0565dd)_actionableHeaderMetricsForDisplayScale:(double)arg1;
+ (double)heightForTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (void)_setupForCurrentFloatingState;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setFloating:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

