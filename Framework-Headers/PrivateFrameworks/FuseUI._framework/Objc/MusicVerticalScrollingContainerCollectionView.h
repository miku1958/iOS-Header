//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@protocol MusicVerticalScrollingContainerCollectionViewDelegate;

@interface MusicVerticalScrollingContainerCollectionView : UICollectionView
{
    struct {
        unsigned int didLayoutSubviews:1;
        unsigned int contentSizeDidChange:1;
    } _delegateRespondsToSelector;
    BOOL _performingLayout;
}

@property (nonatomic) id<MusicVerticalScrollingContainerCollectionViewDelegate> delegate; // @dynamic delegate;
@property (readonly, nonatomic, getter=isPerformingLayout) BOOL performingLayout; // @synthesize performingLayout=_performingLayout;

- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize)arg1;

@end

