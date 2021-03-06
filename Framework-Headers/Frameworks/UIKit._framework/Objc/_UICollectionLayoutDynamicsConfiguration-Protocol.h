//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray;
@protocol _NSCollectionLayoutVisibleItem;

@protocol _UICollectionLayoutDynamicsConfiguration <NSObject>

@property (readonly, nonatomic) struct CGRect currentVisibleBounds;
@property (readonly, nonatomic) NSArray *dynamicItems;
@property (readonly, nonatomic) struct CGRect previousVisibleBounds;

- (NSArray *)behaviorsForItem:(id<_NSCollectionLayoutVisibleItem>)arg1;
- (void)setBehaviors:(NSArray *)arg1 forItem:(id<_NSCollectionLayoutVisibleItem>)arg2;
@end

