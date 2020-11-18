//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSDCanvas, TSDLayout, TSDRootLayout;

@interface TSDLayoutController : NSObject
{
    TSDCanvas *mCanvas;
    TSDRootLayout *mRootLayout;
    struct __CFDictionary *mLayoutsByInfo;
    NSMutableSet *mInvalidLayouts;
    NSMutableSet *mLayoutsNeedingRecreating;
    NSMutableSet *mInvalidChildrenLayouts;
    TSDLayout *mValidatingLayout;
}

+ (id)allInteractiveLayoutControllers;
+ (void)temporaryLayoutControllerForInfos:(id)arg1 useInBlock:(CDUnknownBlockType)arg2;
- (id)ancestorLayoutOfLayout:(id)arg1 orDelegateConformingToProtocol:(id)arg2;
- (id)canvas;
- (void)dealloc;
- (void)i_registerLayout:(id)arg1;
- (void)i_removeAllLayouts;
- (void)i_unregisterLayout:(id)arg1;
- (id)initWithCanvas:(id)arg1;
- (void)invalidateChildrenOfLayout:(id)arg1;
- (void)invalidateLayout:(id)arg1;
- (void)invalidateLayoutForRecreation:(id)arg1;
- (BOOL)isLayoutOffscreen;
- (id)layoutForInfo:(id)arg1;
- (id)layoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)layoutGeometryProviderForLayout:(id)arg1;
- (id)layoutsForInfo:(id)arg1;
- (id)layoutsForInfos:(id)arg1;
- (id)layoutsInRect:(struct CGRect)arg1;
- (void)preregisterLayout:(id)arg1;
- (struct CGRect)rectOfTopLevelLayouts;
- (id)rootLayout;
- (void)setInfos:(id)arg1;
- (id)sortLayoutsForDependencies:(id)arg1;
- (void)unregisterLayout:(id)arg1;
- (void)validateLayoutWithDependencies:(id)arg1;
- (void)validateLayouts;
- (void)validateLayouts:(id)arg1;
- (void)validateLayoutsWithDependencies:(id)arg1;
- (void)validateOrderedLayouts:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1;
- (id)validatedLayoutForInfo:(id)arg1 childOfLayout:(id)arg2;
- (id)validatedLayoutsForInfo:(id)arg1;

@end

