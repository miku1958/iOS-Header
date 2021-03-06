//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProxCardKit/PRXScrollableContentView.h>

@class NSArray, PRXButton, PRXLabel, UIView;

@interface PRXDisclaimerContentView : PRXScrollableContentView
{
    UIView *_disclaimerContainerView;
    NSArray *_contentConstraints;
    PRXLabel *_disclaimerLabel;
    PRXButton *_moreInfoButton;
}

@property (readonly, nonatomic) PRXLabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property (strong, nonatomic) PRXButton *moreInfoButton; // @synthesize moreInfoButton=_moreInfoButton;

- (void).cxx_destruct;
- (id)initWithCardStyle:(long long)arg1;
- (void)updateConstraints;

@end

