//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint;

@interface SearchUIIconViewContainer : UIView
{
    NSArray *_iconViews;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_lastLayoutGuideWidthConstraint;
    NSArray *_spacerLayoutGuides;
    NSArray *_spacerLayoutGuideWidthConstraints;
}

@property (strong) NSArray *iconViews; // @synthesize iconViews=_iconViews;
@property (strong) NSLayoutConstraint *lastLayoutGuideWidthConstraint; // @synthesize lastLayoutGuideWidthConstraint=_lastLayoutGuideWidthConstraint;
@property (strong) NSArray *spacerLayoutGuideWidthConstraints; // @synthesize spacerLayoutGuideWidthConstraints=_spacerLayoutGuideWidthConstraints;
@property (strong) NSArray *spacerLayoutGuides; // @synthesize spacerLayoutGuides=_spacerLayoutGuides;
@property (strong) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;

+ (unsigned long long)maximumNumberOfColumns;
+ (unsigned long long)numberOfColumnsForCurrentOrientation;
+ (unsigned long long)numberOfColumnsForLandscape;
+ (unsigned long long)numberOfColumnsForPortrait;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg1 cell:(id)arg2;

@end
