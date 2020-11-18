//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MaterialKit/MTCoreMaterialVisualStylingProviderObserving-Protocol.h>

@class MTCoreMaterialVisualStylingProvider, NSMapTable, NSMutableDictionary, NSPointerArray, NSString;

@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving>
{
    MTCoreMaterialVisualStylingProvider *_coreMaterialVisualStylingProvider;
    NSMutableDictionary *_styleNamesToVisualStylings;
    NSMapTable *_viewsAndLayersToCoreMaterialVisualStyles;
    NSMapTable *_viewsAndLayersToObserverBlocks;
    NSPointerArray *_privateObservers;
}

@property (readonly, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider;
@property (strong, nonatomic, getter=_coreMaterialVisualStylingProvider) MTCoreMaterialVisualStylingProvider *coreMaterialVisualStylingProvider; // @synthesize coreMaterialVisualStylingProvider=_coreMaterialVisualStylingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_privateObservers) NSPointerArray *privateObservers; // @synthesize privateObservers=_privateObservers;
@property (strong, nonatomic, getter=_styleNamesToVisualStylings) NSMutableDictionary *styleNamesToVisualStylings; // @synthesize styleNamesToVisualStylings=_styleNamesToVisualStylings;
@property (readonly) Class superclass;
@property (strong, nonatomic, getter=_viewsAndLayersToCoreMaterialVisualStyles) NSMapTable *viewsAndLayersToCoreMaterialVisualStyles; // @synthesize viewsAndLayersToCoreMaterialVisualStyles=_viewsAndLayersToCoreMaterialVisualStyles;
@property (strong, nonatomic, getter=_viewsAndLayersToObserverBlocks) NSMapTable *viewsAndLayersToObserverBlocks; // @synthesize viewsAndLayersToObserverBlocks=_viewsAndLayersToObserverBlocks;

+ (Class)_visualStylingClass;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForRecipe:(long long)arg1 category:(long long)arg2 andUserInterfaceStyle:(long long)arg3;
+ (id)_visualStylingProviderForRecipeNamed:(id)arg1 andCategory:(long long)arg2;
+ (id)_visualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2;
- (void).cxx_destruct;
- (void)_addObserver:(id)arg1;
- (void)_automaticallyUpdateView:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)_automaticallyUpdateViewOrLayer:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)_removeObserver:(id)arg1;
- (void)_stopAutomaticallyUpdatingViewOrLayer:(id)arg1;
- (void)_updateVisualStyleOfViewOrLayer:(id)arg1;
- (id)_visualStylingForContinuallyUpdatedView:(id)arg1;
- (id)_visualStylingForStyle:(long long)arg1;
- (id)_visualStylingForStyleNamed:(id)arg1;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2;
- (void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2;
- (void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(CDUnknownBlockType)arg3;
- (id)initWithCoreMaterialVisualStylingProvider:(id)arg1;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)stopAutomaticallyUpdatingLayer:(id)arg1;
- (void)stopAutomaticallyUpdatingView:(id)arg1;

@end
