//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface VCUIHeadlineView : UIView
{
    UILabel *_supertitleLabel;
    UILabel *_titleLabel;
}

@property (strong, nonatomic) UILabel *supertitleLabel; // @synthesize supertitleLabel=_supertitleLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)initWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(BOOL)arg4;
- (void)updateTitleWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(BOOL)arg4;

@end

