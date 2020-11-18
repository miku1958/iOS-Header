//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKPhysicalCardArtworkView : UIView
{
    UIImageView *_artworkImageView;
    UILabel *_nameLabel;
    UIImage *_artworkImage;
    NSString *_nameOnCard;
}

@property (strong, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property (copy, nonatomic) NSString *nameOnCard; // @synthesize nameOnCard=_nameOnCard;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

