//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSCollectionLayoutVisibleItem;
@protocol _NSCollectionLayoutVisibleItem;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicBehavior : UIDynamicBehavior
{
    id<_NSCollectionLayoutVisibleItem> _visibleItem;
}

@property (readonly, nonatomic) NSCollectionLayoutVisibleItem *visibleItem; // @synthesize visibleItem=_visibleItem;

- (void).cxx_destruct;
- (id)initWithVisibleItem:(id)arg1;
- (id)item;

@end

