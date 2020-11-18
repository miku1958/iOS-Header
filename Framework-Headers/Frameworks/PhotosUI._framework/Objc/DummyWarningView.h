//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, PXUpdater, UILabel;

@interface DummyWarningView : UIView
{
    long long _warningLevel;
    NSString *_warningReason;
    PXUpdater *_updater;
    UILabel *_label;
}

@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property (nonatomic) long long warningLevel; // @synthesize warningLevel=_warningLevel;
@property (copy, nonatomic) NSString *warningReason; // @synthesize warningReason=_warningReason;

- (void).cxx_destruct;
- (void)_updateBackgroundColor;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
