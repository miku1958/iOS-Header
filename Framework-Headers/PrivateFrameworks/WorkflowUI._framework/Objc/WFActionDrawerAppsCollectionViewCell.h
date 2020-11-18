//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <WorkflowUI/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>
{
    NSString *_title;
    UIImage *_appIconImage;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (readonly, nonatomic) UIImage *appIconImage; // @synthesize appIconImage=_appIconImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (weak, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (struct CGSize)preferredSize;
- (void).cxx_destruct;
- (void)configureWithTitle:(id)arg1 appIconImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;

@end
