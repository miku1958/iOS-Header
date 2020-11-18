//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUMarqueeView, NSDictionary, NSString, UIImage, UIImageView, UILabel;

@interface MPUNowPlayingTitlesView : UIView
{
    MPUMarqueeView *_titleMarqueeView;
    MPUMarqueeView *_detailMarqueeView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_explicitImageView;
    BOOL _needsLabelUpdate;
    BOOL _explicit;
    long long _style;
    NSDictionary *_titleTextAttributes;
    NSDictionary *_detailTextAttributes;
    NSString *_albumText;
    NSString *_artistText;
    NSString *_stationNameText;
    double _textMargin;
    double _titleLeading;
    NSString *_titleText;
    UIImage *_explicitImage;
    struct UIEdgeInsets _titleMarqueeEdgeInsets;
    struct UIEdgeInsets _detailMarqueeEdgeInsets;
}

@property (copy, nonatomic) NSString *albumText; // @synthesize albumText=_albumText;
@property (copy, nonatomic) NSString *artistText; // @synthesize artistText=_artistText;
@property (nonatomic) struct UIEdgeInsets detailMarqueeEdgeInsets; // @synthesize detailMarqueeEdgeInsets=_detailMarqueeEdgeInsets;
@property (strong, nonatomic) NSDictionary *detailTextAttributes; // @synthesize detailTextAttributes=_detailTextAttributes;
@property (nonatomic, getter=isExplicit) BOOL explicit; // @synthesize explicit=_explicit;
@property (strong, nonatomic) UIImage *explicitImage; // @synthesize explicitImage=_explicitImage;
@property (nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled;
@property (copy, nonatomic) NSString *stationNameText; // @synthesize stationNameText=_stationNameText;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic) double textMargin; // @synthesize textMargin=_textMargin;
@property (readonly, nonatomic) double titleBaselineOffsetFromBottom;
@property (nonatomic) double titleLeading; // @synthesize titleLeading=_titleLeading;
@property (nonatomic) struct UIEdgeInsets titleMarqueeEdgeInsets; // @synthesize titleMarqueeEdgeInsets=_titleMarqueeEdgeInsets;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (strong, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;

+ (Class)labelClass;
- (void).cxx_destruct;
- (id)_detailLabel;
- (id)_detailMarqueeView;
- (id)_titleLabel;
- (id)_titleMarqueeView;
- (void)_updateAttributedTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)resetMarqueePositions;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

