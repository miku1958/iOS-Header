//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface WFLibraryEllipsisButton : UIButton
{
    CALayer *_backgroundCircleLayer;
}

@property (weak, nonatomic) CALayer *backgroundCircleLayer; // @synthesize backgroundCircleLayer=_backgroundCircleLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
