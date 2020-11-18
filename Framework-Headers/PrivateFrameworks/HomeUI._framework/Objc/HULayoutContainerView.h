//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HULayoutContainerView : UIView
{
    UIView *_contentView;
    CDUnknownBlockType _layoutBlock;
}

@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;

- (void).cxx_destruct;
- (id)initWithContentView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end

