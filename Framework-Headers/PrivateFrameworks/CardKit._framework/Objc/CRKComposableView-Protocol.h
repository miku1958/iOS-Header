//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol CRKCardSectionView;

@protocol CRKComposableView <NSObject>

@property (readonly, nonatomic) struct UIEdgeInsets cardSectionContentMargins;
@property (readonly, nonatomic) NSArray *cardSectionSubviews;

- (void)addCardSectionSubview:(UIView<CRKCardSectionView> *)arg1 withKeyline:(long long)arg2;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(UIView<CRKCardSectionView> *)arg1;
@end

