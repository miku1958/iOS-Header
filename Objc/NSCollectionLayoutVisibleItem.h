//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_NSCollectionLayoutVisibleItem-Protocol.h>

@class NSCollectionLayoutItem, NSIndexPath, NSString, UIBezierPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface NSCollectionLayoutVisibleItem : NSObject <_NSCollectionLayoutVisibleItem>
{
    BOOL _dirty;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    NSCollectionLayoutItem *_layoutItem;
}

@property (nonatomic) double alpha;
@property (readonly, nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_dirty;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property (strong, nonatomic) NSCollectionLayoutItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CATransform3D transform3D;
@property (nonatomic) long long zIndex;

- (void).cxx_destruct;
- (id)initWithLayoutAttributes:(id)arg1 layoutItem:(id)arg2;

@end

