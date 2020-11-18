//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionViewLayoutInteractionStateProviding-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, UICollectionViewLayout;
@protocol _UICollectionViewLayoutInteractionStateModuleHost;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding>
{
    NSMutableSet *_indexPathsWithBackgroundFillForInteraction;
    NSMutableDictionary *_postProcessingCellsMap;
    Class _invalidationContextClass;
    UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *_host;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UICollectionViewLayout<_UICollectionViewLayoutInteractionStateModuleHost> *host; // @synthesize host=_host;
@property (readonly, nonatomic) Class invalidationContextClass; // @synthesize invalidationContextClass=_invalidationContextClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellForItemAtIndexPath:(id)arg1;
- (BOOL)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)arg1 cellGroupingPreference:(out long long *)arg2 backgroundIsInset:(out BOOL *)arg3;
- (void)_noteCellDidFinishPostProcessingAtIndexPath:(id)arg1;
- (void)_noteCellWillBeginPostProcessing:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_shouldAdjustLayoutToMergeBarInSection:(long long)arg1;
- (BOOL)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1;
- (BOOL)itemAtIndexPathIsHighlighted:(id)arg1;
- (BOOL)itemAtIndexPathIsSelected:(id)arg1;
- (void)performPreferredAttributesPostProcessingBlock:(CDUnknownBlockType)arg1 withLayoutAttributes:(id)arg2 forView:(id)arg3;
- (void)processLayoutInvalidationWithContext:(id)arg1;
- (unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1;

@end
