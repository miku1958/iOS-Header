//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPGSVSectionHeaderView-Protocol.h>

@class NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol PKPGSVSectionHeaderViewDelegate;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView>
{
    UILabel *_titleView;
    UILabel *_environmentLabel;
    UIButton *_actionButton;
    UIActivityIndicatorView *_activityIndicator;
    struct UIEdgeInsets _margins;
    id<PKPGSVSectionHeaderViewDelegate> _delegate;
    BOOL _showActivityIndicator;
    unsigned long long _passType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long passType; // @synthesize passType=_passType;
@property (nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addTapped;
- (BOOL)_shouldShowMoreInfoButtonForBarcodePass;
- (void)addTapped;
- (id)init;
- (id)initWithPassType:(unsigned long long)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (id)leadingView;
- (BOOL)needsUpdate;
- (id)trailingView;

@end

