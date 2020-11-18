//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXTilingCoordinateSpace, PXTilingScrollInfo;
@protocol PXTilingLayoutObserver;

@interface PXTilingLayout : NSObject
{
    PXTilingScrollInfo *_scrollInfo;
    void *_coordinateSpaceIdentifier;
    id<PXTilingLayoutObserver> _observer;
    PXTilingCoordinateSpace *_coordinateSpace;
    struct CGSize _referenceSize;
    struct CGSize _visibleSize;
    struct CGPoint _visibleOrigin;
    struct UIEdgeInsets _contentInset;
}

@property (readonly, nonatomic) BOOL allowHorizontalFlip;
@property (readonly, nonatomic) struct CGRect contentBounds;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, nonatomic) PXTilingCoordinateSpace *coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property (readonly, nonatomic) void *coordinateSpaceIdentifier; // @synthesize coordinateSpaceIdentifier=_coordinateSpaceIdentifier;
@property (weak, nonatomic) id<PXTilingLayoutObserver> observer; // @synthesize observer=_observer;
@property (nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property (readonly, nonatomic) struct CGRect scrollBounds;
@property (readonly, copy, nonatomic) PXTilingScrollInfo *scrollInfo; // @synthesize scrollInfo=_scrollInfo;
@property (readonly, nonatomic) BOOL shouldFlipHorizontally;
@property (nonatomic) struct CGPoint visibleOrigin; // @synthesize visibleOrigin=_visibleOrigin;
@property (readonly, nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGSize visibleSize; // @synthesize visibleSize=_visibleSize;

- (void).cxx_destruct;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (id)init;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;

@end

