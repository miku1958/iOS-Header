//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol EKLayoutContainerViewDelegate;

@interface EKLayoutContainerView : UIView
{
    id<EKLayoutContainerViewDelegate> _delegate;
}

@property (weak, nonatomic) id<EKLayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
