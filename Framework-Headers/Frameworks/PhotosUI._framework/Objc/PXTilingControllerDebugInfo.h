//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXTilingControllerDebugInfo : NSObject
{
    NSArray *_preheatRects;
    NSArray *_pagedItems;
    NSArray *_preheatedItems;
    NSArray *_activeItems;
    struct CGRect _visibleRect;
    struct CGRect _activeRect;
    struct CGRect _pagedRect;
    struct CGRect _cachedRect;
    struct CGRect _contentBounds;
}

@property (strong, nonatomic) NSArray *activeItems; // @synthesize activeItems=_activeItems;
@property (nonatomic) struct CGRect activeRect; // @synthesize activeRect=_activeRect;
@property (nonatomic) struct CGRect cachedRect; // @synthesize cachedRect=_cachedRect;
@property (nonatomic) struct CGRect contentBounds; // @synthesize contentBounds=_contentBounds;
@property (strong, nonatomic) NSArray *pagedItems; // @synthesize pagedItems=_pagedItems;
@property (nonatomic) struct CGRect pagedRect; // @synthesize pagedRect=_pagedRect;
@property (strong, nonatomic) NSArray *preheatRects; // @synthesize preheatRects=_preheatRects;
@property (strong, nonatomic) NSArray *preheatedItems; // @synthesize preheatedItems=_preheatedItems;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

@end
