//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIButton;
@protocol HUToggleSectionHeaderDelegate;

@interface HUToggleSectionHeader : UITableViewHeaderFooterView
{
    unsigned long long _toggleState;
    id<HUToggleSectionHeaderDelegate> _delegate;
    UIButton *_toggleButton;
}

@property (weak, nonatomic) id<HUToggleSectionHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property (nonatomic) BOOL toggleButtonHidden;
@property (nonatomic) unsigned long long toggleState; // @synthesize toggleState=_toggleState;

- (void).cxx_destruct;
- (void)_toggle:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;

@end

