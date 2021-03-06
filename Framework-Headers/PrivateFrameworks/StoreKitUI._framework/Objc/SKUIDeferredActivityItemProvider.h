//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIProductPageItem;

__attribute__((visibility("hidden")))
@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider
{
    SKUIProductPageItem *_productPageItem;
    SKUIClientContext *_clientContext;
    CDUnknownBlockType _itemProvider;
}

@property (strong) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (copy) CDUnknownBlockType itemProvider; // @synthesize itemProvider=_itemProvider;
@property (readonly, copy) SKUIProductPageItem *productPageItem; // @synthesize productPageItem=_productPageItem;

+ (id)placeholderItem;
- (void).cxx_destruct;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(CDUnknownBlockType)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3;

@end

