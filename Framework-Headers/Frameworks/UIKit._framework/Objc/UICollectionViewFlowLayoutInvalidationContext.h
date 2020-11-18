//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayoutInvalidationContext.h>

@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    struct {
        unsigned int invalidateDelegateMetrics:1;
        unsigned int invalidateAttributes:1;
    } _flowLayoutInvalidationFlags;
}

@property (nonatomic) BOOL invalidateFlowLayoutAttributes;
@property (nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;

- (id)init;

@end

