//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUButtonCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>

@class HFItem, NSString, UIActivityIndicatorView;
@protocol HUResizableCellDelegate;

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol>
{
    BOOL _showSpinner;
    BOOL _useFullWidthSeparator;
    UIActivityIndicatorView *_spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property (strong, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFullWidthSeparator; // @synthesize useFullWidthSeparator=_useFullWidthSeparator;

- (void).cxx_destruct;
- (struct CGRect)_separatorFrame;
- (void)createSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;

@end

