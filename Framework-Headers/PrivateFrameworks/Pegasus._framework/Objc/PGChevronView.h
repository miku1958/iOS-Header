//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface PGChevronView : UIView
{
    long long _state;
    UIView *_topView;
    UIView *_bottomView;
}

@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setState:(long long)arg1 animated:(BOOL)arg2;

@end
