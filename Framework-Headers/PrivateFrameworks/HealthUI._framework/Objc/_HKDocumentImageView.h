//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface _HKDocumentImageView : UIView
{
    UIImageView *_imageView;
    struct UIEdgeInsets _margins;
}

@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
