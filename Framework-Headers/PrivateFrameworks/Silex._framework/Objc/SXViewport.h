//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScrollView;

@interface SXViewport : NSObject
{
    BOOL _groupChanges;
    unsigned long long _appearState;
    long long _interfaceOrientation;
    NSHashTable *_dynamicBoundsListeners;
    NSHashTable *_boundsListeners;
    NSHashTable *_appearStateListeners;
    NSHashTable *_documentSizeListeners;
    NSHashTable *_contentFrameListeners;
    NSHashTable *_interfaceOrientationListeners;
    SXViewport *_viewportBeforeUpdates;
    UIScrollView *_view;
    struct CGSize _documentSize;
    struct CGRect _bounds;
    struct CGRect _dynamicBounds;
    struct CGRect _contentFrame;
}

@property (nonatomic) unsigned long long appearState; // @synthesize appearState=_appearState;
@property (strong, nonatomic) NSHashTable *appearStateListeners; // @synthesize appearStateListeners=_appearStateListeners;
@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (strong, nonatomic) NSHashTable *boundsListeners; // @synthesize boundsListeners=_boundsListeners;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property (strong, nonatomic) NSHashTable *contentFrameListeners; // @synthesize contentFrameListeners=_contentFrameListeners;
@property (nonatomic) struct CGSize documentSize; // @synthesize documentSize=_documentSize;
@property (strong, nonatomic) NSHashTable *documentSizeListeners; // @synthesize documentSizeListeners=_documentSizeListeners;
@property (nonatomic) struct CGRect dynamicBounds; // @synthesize dynamicBounds=_dynamicBounds;
@property (strong, nonatomic) NSHashTable *dynamicBoundsListeners; // @synthesize dynamicBoundsListeners=_dynamicBoundsListeners;
@property (nonatomic) BOOL groupChanges; // @synthesize groupChanges=_groupChanges;
@property (nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (strong, nonatomic) NSHashTable *interfaceOrientationListeners; // @synthesize interfaceOrientationListeners=_interfaceOrientationListeners;
@property (readonly, nonatomic) BOOL isPopulated;
@property (readonly, weak, nonatomic) UIScrollView *view; // @synthesize view=_view;
@property (strong, nonatomic) SXViewport *viewportBeforeUpdates; // @synthesize viewportBeforeUpdates=_viewportBeforeUpdates;

- (void).cxx_destruct;
- (void)addViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)appearStateChangedFromState:(unsigned long long)arg1;
- (void)beginUpdates;
- (void)boundsDidChangeFromBounds:(struct CGRect)arg1;
- (void)contentFrameDidChangeFromFrame:(struct CGRect)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGPoint)convertPointToViewportCoordinateSpace:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRectToViewportCoordinateSpace:(struct CGRect)arg1 fromView:(id)arg2;
- (id)debugDescriptionForViewport:(id)arg1;
- (id)description;
- (void)documentSizeDidChangeFromSize:(struct CGSize)arg1;
- (void)dynamicBoundsDidChangeFromBounds:(struct CGRect)arg1;
- (void)endUpdates;
- (id)initWithView:(id)arg1;
- (void)interfaceOrientationChangedFromOrientation:(long long)arg1;
- (void)removeViewportChangeListener:(id)arg1 forOptions:(unsigned long long)arg2;
- (void)reset;
- (id)stringForAppearState:(unsigned long long)arg1;
- (id)stringFroInterfaceOrientation:(long long)arg1;

@end
