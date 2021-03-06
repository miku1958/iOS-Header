//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class SKUIItem;

@interface SUScriptGiftViewController : SUScriptViewController
{
    long long _giftCategory;
    SKUIItem *_item;
}

@property (readonly, nonatomic) long long giftCategoryApps;
@property (readonly, nonatomic) long long giftCategoryBooks;
@property (readonly, nonatomic) long long giftCategoryMedia;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)newNativeViewController;
- (id)scriptAttributeKeys;
- (void)setCreditGiftStyle:(long long)arg1;
- (void)setProductGiftItem:(id)arg1;

@end

