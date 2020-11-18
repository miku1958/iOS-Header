//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface SearchUITextAreaView : UIView
{
    UIView *_secondToLastView;
    UIView *_lastView;
    NSString *_reuseID;
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
    UIImageView *_secondaryImageView;
    NSArray *_richTextFields;
    UILabel *_footnoteLabel;
    UIImageView *_embeddedThumbnailView;
    NSLayoutConstraint *_embeddedThumbnailAspectConstraint;
    NSLayoutConstraint *_titleHeightConstraint;
}

@property (strong) NSLayoutConstraint *embeddedThumbnailAspectConstraint; // @synthesize embeddedThumbnailAspectConstraint=_embeddedThumbnailAspectConstraint;
@property (strong) UIImageView *embeddedThumbnailView; // @synthesize embeddedThumbnailView=_embeddedThumbnailView;
@property (strong) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property (strong) UIView *lastView; // @synthesize lastView=_lastView;
@property (strong) NSString *reuseID; // @synthesize reuseID=_reuseID;
@property (strong) NSArray *richTextFields; // @synthesize richTextFields=_richTextFields;
@property (strong) UIView *secondToLastView; // @synthesize secondToLastView=_secondToLastView;
@property (strong) UIImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property (strong) UILabel *secondaryTitleLabel; // @synthesize secondaryTitleLabel=_secondaryTitleLabel;
@property (strong) NSLayoutConstraint *titleHeightConstraint; // @synthesize titleHeightConstraint=_titleHeightConstraint;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)_reuseIDForResult:(id)arg1 textAreaData:(id)arg2 formatter:(id)arg3;
+ (id)hyphenationStyleAttributedStringForTitle:(id)arg1;
+ (id)reuseIDForData:(id)arg1 formatter:(id)arg2;
+ (id)reuseIDForResult:(id)arg1 formatter:(id)arg2;
+ (double)uiLabelTwoRowHeightForFont:(id)arg1;
- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 style:(unsigned long long)arg2 formatter:(id)arg3;
- (id)initWithTextAreaData:(id)arg1 style:(unsigned long long)arg2 formatter:(id)arg3;
- (void)updateTextWidths;
- (BOOL)updateWithResult:(id)arg1 formatter:(id)arg2;
- (BOOL)updateWithTextAreaData:(id)arg1 formatter:(id)arg2;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewForSecondToLastBaselineLayout;

@end

