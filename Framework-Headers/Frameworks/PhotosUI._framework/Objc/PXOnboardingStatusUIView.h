//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel, UIProgressView;

@interface PXOnboardingStatusUIView : UIView
{
    BOOL _paused;
    double _progress;
    NSString *_title;
    NSString *_descriptionText;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIProgressView *_progressView;
    NSArray *_constraints;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (strong, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_createViews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end

