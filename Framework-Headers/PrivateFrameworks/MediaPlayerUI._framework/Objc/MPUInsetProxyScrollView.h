//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol MPUInsetProxyScrollViewDelegate;

@interface MPUInsetProxyScrollView : UIScrollView
{
}

@property (nonatomic) id<MPUInsetProxyScrollViewDelegate> delegate; // @dynamic delegate;

- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;

@end
