//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUICollectionViewCell.h>

@class NSArray, NSMapTable, SKUIViewReusePool;

__attribute__((visibility("hidden")))
@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell
{
    NSMapTable *_allViewTextProperties;
    SKUIViewReusePool *_viewPool;
    NSArray *_allExistingViews;
    struct UIEdgeInsets _contentInset;
}

@property (readonly, nonatomic) NSArray *allExistingViews; // @synthesize allExistingViews=_allExistingViews;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)enumerateExistingViewsForReuseIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)existingViewForIndex:(long long)arg1;
- (id)existingViewsForReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)modifyUsingBlock:(CDUnknownBlockType)arg1;
- (void)registerClass:(Class)arg1 forViewWithReuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)textPropertiesForView:(id)arg1;

@end

