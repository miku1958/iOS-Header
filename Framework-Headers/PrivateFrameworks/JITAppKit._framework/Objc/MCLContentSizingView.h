//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TKKeyPathObserver, UIScrollView;

__attribute__((visibility("hidden")))
@interface MCLContentSizingView : UIView
{
    TKKeyPathObserver *_observer;
    UIScrollView *_contentView;
}

@property (strong, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;

@end
