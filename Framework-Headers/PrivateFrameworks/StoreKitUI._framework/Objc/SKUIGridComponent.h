//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSMutableArray;

@interface SKUIGridComponent : SKUIPageComponent
{
    NSMutableArray *_children;
    struct SKUIEditorialStyle _editorialStyle;
    long long _gridType;
    struct SKUILockupStyle _lockupStyle;
    long long _missingItemCount;
    BOOL _showsIndexNumbers;
}

@property (readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property (readonly, nonatomic) struct SKUIEditorialStyle editorialStyle; // @synthesize editorialStyle=_editorialStyle;
@property (readonly, nonatomic) long long gridType; // @synthesize gridType=_gridType;
@property (readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;
@property (readonly, nonatomic) BOOL showsIndexNumbers; // @synthesize showsIndexNumbers=_showsIndexNumbers;

- (void).cxx_destruct;
- (id)_newLockupComponentWithItem:(id)arg1 defaultStyle:(struct SKUILockupStyle)arg2;
- (void)_reloadMissingItemCount;
- (void)_setChildrenWithFeaturedContextContext:(id)arg1;
- (id)_updateWithInvalidItemIdentifiers:(id)arg1;
- (id)_updateWithMissingItems:(id)arg1;
- (long long)componentType;
- (id)description;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithBrickItems:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithGridItems:(id)arg1;
- (id)initWithLockups:(id)arg1;
- (id)initWithRoomContext:(id)arg1 gridType:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (BOOL)isMissingItemData;
- (id)metricsElementName;

@end

