//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSCollectionLayoutSupplementaryItem.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying>
{
    long long _alignment;
    BOOL _extendsBoundary;
    BOOL _pinToVisibleBounds;
    struct CGPoint _offset;
}

@property (readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (nonatomic) BOOL extendsBoundary; // @synthesize extendsBoundary=_extendsBoundary;
@property (readonly, nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property (nonatomic) BOOL pinToVisibleBounds; // @synthesize pinToVisibleBounds=_pinToVisibleBounds;

+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(struct CGPoint)arg4;
- (id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(struct CGPoint)arg8 extendsBoundary:(BOOL)arg9 pinToVisibleBounds:(BOOL)arg10;
- (BOOL)isEqual:(id)arg1;

@end
