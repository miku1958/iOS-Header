//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSURL, UIImageView, UILabel;

@interface NUArticleExcerptReadMoreButton : UIButton
{
    unsigned long long _excerptLenthType;
    NSURL *_domainURL;
    UILabel *_readStoryLabel;
    UILabel *_domainLabel;
    UIImageView *_arrowImageView;
}

@property (readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property (readonly, nonatomic) UILabel *domainLabel; // @synthesize domainLabel=_domainLabel;
@property (strong, nonatomic) NSURL *domainURL; // @synthesize domainURL=_domainURL;
@property (nonatomic) unsigned long long excerptLenthType; // @synthesize excerptLenthType=_excerptLenthType;
@property (readonly, nonatomic) UILabel *readStoryLabel; // @synthesize readStoryLabel=_readStoryLabel;

+ (id)arrowImage;
+ (double)readMoreButtonHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

