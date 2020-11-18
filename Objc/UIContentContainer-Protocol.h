//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UITraitCollection;
@protocol UIContentContainer, UIViewControllerTransitionCoordinator;

@protocol UIContentContainer <NSObject>

@property (readonly, nonatomic) struct CGSize preferredContentSize;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id<UIContentContainer>)arg1;
- (struct CGSize)sizeForChildContentContainer:(id<UIContentContainer>)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id<UIContentContainer>)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg2;
- (void)willTransitionToTraitCollection:(UITraitCollection *)arg1 withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg2;
@end

