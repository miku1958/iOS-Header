//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/_TtC7SwiftUI23PlatformViewCoordinator.h>

#import <SwiftUI/UICollectionViewDataSource-Protocol.h>
#import <SwiftUI/UICollectionViewDelegate-Protocol.h>

@class MISSING_TYPE;

@interface _TtC7SwiftUIP33_8825076C2763A50452A210CBE1FA4AF011Coordinator : _TtC7SwiftUI23PlatformViewCoordinator <UICollectionViewDataSource, UICollectionViewDelegate>
{
    MISSING_TYPE *selectedIndex;
    MISSING_TYPE *children;
    MISSING_TYPE *lastSeenIndex;
    MISSING_TYPE *updateCount;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

@end
