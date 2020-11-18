//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IKImageElement, IKTextElement, IKViewElement, UIView, _TVImageView, _TVLabel;

__attribute__((visibility("hidden")))
@interface VUIPopoverTableViewCell : UITableViewCell
{
    BOOL _imageLoaded;
    UIView *_dimmingView;
    IKViewElement *_cardElement;
    IKTextElement *_textElement;
    IKImageElement *_imageElement;
    double _preferredHeight;
    UIView *_cardView;
    _TVImageView *_tvImageView;
    _TVLabel *_tvLabel;
}

@property (strong, nonatomic) IKViewElement *cardElement; // @synthesize cardElement=_cardElement;
@property (strong, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (strong, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property (nonatomic, getter=isImageLoaded) BOOL imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property (nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property (strong, nonatomic) IKTextElement *textElement; // @synthesize textElement=_textElement;
@property (strong, nonatomic) _TVImageView *tvImageView; // @synthesize tvImageView=_tvImageView;
@property (strong, nonatomic) _TVLabel *tvLabel; // @synthesize tvLabel=_tvLabel;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
