//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIButton, _MKUILabel;
@protocol GEOTransitConnectionInfo, _MKTransitConnectionCellDelegate;

__attribute__((visibility("hidden")))
@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell
{
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
    id<GEOTransitConnectionInfo> _connectionInfo;
    id<_MKTransitConnectionCellDelegate> _delegate;
}

@property (strong, nonatomic) id<GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
@property (weak, nonatomic) id<_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

