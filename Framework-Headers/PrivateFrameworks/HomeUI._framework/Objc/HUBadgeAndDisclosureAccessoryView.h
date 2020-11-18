//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView
{
    long long _badgeCount;
    UIView *_badgeContainerView;
    UIImageView *_badgeImageView;
    UILabel *_badgeLabel;
    UIImageView *_disclosureImageView;
}

@property (strong, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property (nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property (strong, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property (strong, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property (strong, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;

+ (id)_disclosureImage;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

