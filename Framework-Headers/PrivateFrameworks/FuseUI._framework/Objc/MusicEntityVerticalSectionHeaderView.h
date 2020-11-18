//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <FuseUI/MusicActionableHeaderViewDelegate-Protocol.h>

@class MusicActionableHeaderView, NSString, UIView;
@protocol MusicEntityVerticalSectionHeaderViewDelegate;

@interface MusicEntityVerticalSectionHeaderView : UICollectionReusableView <MusicActionableHeaderViewDelegate>
{
    UIView *_hairlineView;
    BOOL _alignsHairlineWithTitle;
    id<MusicEntityVerticalSectionHeaderViewDelegate> _delegate;
    MusicActionableHeaderView *_actionableHeaderView;
    double _topContentInset;
    double _bottomContentInset;
}

@property (readonly, nonatomic) MusicActionableHeaderView *actionableHeaderView; // @synthesize actionableHeaderView=_actionableHeaderView;
@property (nonatomic) BOOL alignsHairlineWithTitle; // @synthesize alignsHairlineWithTitle=_alignsHairlineWithTitle;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicEntityVerticalSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;

+ (CDStruct_c3b9c2ee)_actionableHeaderMetrics;
+ (Class)actionableHeaderViewClass;
+ (double)heightForTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;

@end

