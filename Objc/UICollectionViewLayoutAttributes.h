//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIDynamicItem-Protocol.h>

@class NSIndexPath, NSMutableDictionary, NSString, UIBezierPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>
{
    NSString *_elementKind;
    NSIndexPath *_indexPath;
    NSString *_reuseIdentifier;
    struct CGPoint _center;
    struct CGSize _size;
    struct CGRect _frame;
    double _alpha;
    long long _zPosition;
    struct CATransform3D _transform;
    struct CGRect _maskViewFrame;
    NSMutableDictionary *_customAttributes;
    struct {
        unsigned int isCellKind:1;
        unsigned int isDecorationView:1;
        unsigned int isHidden:1;
        unsigned int isClone:1;
        unsigned int masksToBounds:1;
        unsigned int maskedCorners:4;
        unsigned int hasDefaultLayoutMargins:1;
        unsigned int removeMaskViewAfterAnimation:1;
    } _layoutFlags;
    BOOL _hasMaskViewFrame;
    long long _zIndex;
    unsigned long long _selectionGrouping;
    double _cornerRadius;
    struct UIEdgeInsets _defaultLayoutMargins;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint center; // @synthesize center=_center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) struct UIEdgeInsets defaultLayoutMargins; // @synthesize defaultLayoutMargins=_defaultLayoutMargins;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGRect frame;
@property (readonly, nonatomic, getter=_hasDefaultLayoutMargins) BOOL hasDefaultLayoutMargins;
@property (nonatomic, getter=_hasMaskViewFrame) BOOL hasMaskViewFrame; // @synthesize hasMaskViewFrame=_hasMaskViewFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (strong, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (readonly, nonatomic, getter=_maskViewFrame) struct CGRect maskViewFrame;
@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) unsigned long long maskedCorners;
@property (nonatomic, getter=_masksToBounds, setter=_setMasksToBounds:) BOOL masksToBounds;
@property (readonly, nonatomic, getter=_removeMaskViewAfterAnimation) BOOL removeMaskViewAfterAnimation;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (nonatomic, getter=_selectionGrouping, setter=_setSelectionGrouping:) unsigned long long selectionGrouping; // @synthesize selectionGrouping=_selectionGrouping;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) struct CATransform3D transform3D; // @synthesize transform3D=_transform;
@property (nonatomic) long long zIndex; // @synthesize zIndex=_zIndex;

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
+ (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)__elementKind;
- (id)__indexPath;
- (id)_elementKind;
- (BOOL)_isCell;
- (BOOL)_isClone;
- (BOOL)_isDecorationView;
- (BOOL)_isEquivalentTo:(id)arg1;
- (BOOL)_isSupplementaryView;
- (BOOL)_isTransitionVisibleTo:(id)arg1;
- (id)_reuseIdentifier;
- (void)_setElementKind:(id)arg1;
- (void)_setIsClone:(BOOL)arg1;
- (void)_setMaskViewFrame:(struct CGRect)arg1 removeAfterAnimation:(BOOL)arg2;
- (void)_setReuseIdentifier:(id)arg1;
- (void)_setValue:(id)arg1 forCustomAttribute:(id)arg2;
- (void)_setZPosition:(long long)arg1;
- (id)_valueForCustomAttribute:(id)arg1;
- (long long)_zPosition;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSizeEqualForPreferredFittingAttributes:(id)arg1;

@end

