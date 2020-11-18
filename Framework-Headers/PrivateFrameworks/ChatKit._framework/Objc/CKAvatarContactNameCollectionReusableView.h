//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView
{
    BOOL _shouldDisplayTitle;
    long long _style;
    UILabel *_titleLabel;
}

@property (nonatomic) BOOL shouldDisplayTitle; // @synthesize shouldDisplayTitle=_shouldDisplayTitle;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;
- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
