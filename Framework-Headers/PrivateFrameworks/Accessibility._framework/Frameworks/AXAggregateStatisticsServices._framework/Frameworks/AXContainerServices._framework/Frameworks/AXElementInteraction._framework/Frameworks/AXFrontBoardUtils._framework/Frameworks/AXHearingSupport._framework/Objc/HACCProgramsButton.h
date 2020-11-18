//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <AXHearingSupport/HACCContentModule-Protocol.h>

@class NSString, UILabel, UIVisualEffectView;
@protocol HACCContentModuleDelegate;

@interface HACCProgramsButton : UIControl <HACCContentModule>
{
    UIVisualEffectView *_titleContainer;
    UIVisualEffectView *_subtitleContainer;
    unsigned long long module;
    id<HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<HACCContentModuleDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long module; // @synthesize module;
@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)buttonTapped:(id)arg1;
- (id)contentValue;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElement;
- (void)updateConstraints;
- (void)updateValue;

@end

