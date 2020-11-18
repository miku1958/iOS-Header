//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class SKUIEditorialComponent, SKUIItem, SKUILockupViewElement;

@interface SKUILockupComponent : SKUIPageComponent
{
    SKUIEditorialComponent *_editorial;
    SKUIItem *_item;
    long long _itemIdentifier;
    struct SKUILockupStyle _lockupStyle;
}

@property (readonly, nonatomic) BOOL _needsItemData;
@property (readonly, nonatomic) SKUIEditorialComponent *editorial; // @synthesize editorial=_editorial;
@property (readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, nonatomic) struct SKUILockupStyle lockupStyle; // @synthesize lockupStyle=_lockupStyle;
@property (readonly, nonatomic) SKUILockupViewElement *viewElement; // @dynamic viewElement;

- (void).cxx_destruct;
- (void)_setItem:(id)arg1;
- (void)_setLockupStyle:(struct SKUILockupStyle)arg1;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithItem:(id)arg1 style:(struct SKUILockupStyle)arg2;
- (id)initWithItemIdentifier:(long long)arg1 style:(struct SKUILockupStyle)arg2;
- (id)initWithViewElement:(id)arg1;

@end

