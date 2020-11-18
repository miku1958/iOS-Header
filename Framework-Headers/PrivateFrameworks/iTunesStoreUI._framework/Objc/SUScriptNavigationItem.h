//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, UINavigationItem;
@protocol SUScriptNavigationItem;

@interface SUScriptNavigationItem : SUScriptObject
{
}

@property (copy) NSString *backButtonTitle;
@property id hidesBackButton;
@property (strong) id<SUScriptNavigationItem> leftItem;
@property id leftItemsSupplementBackButton;
@property (strong) id<SUScriptNavigationItem> leftMostItem;
@property (readonly, nonatomic) UINavigationItem *nativeNavigationItem;
@property (strong) NSString *prompt;
@property (strong) id<SUScriptNavigationItem> rightItem;
@property (strong) NSString *title;
@property (strong) id titleView;

+ (void)_disconnectNavigationItem:(id)arg1 scriptObject:(id)arg2;
+ (id)_rootScriptObjectForObject:(id)arg1;
+ (void)disconnectNavigationItem:(id)arg1 forScriptObject:(id)arg2;
+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
- (id)_className;
- (id)_copyScriptButtonForButtonItem:(id)arg1;
- (id)_copyScriptObjectForButtonItem:(id)arg1;
- (id)attributeKeys;
- (id)init;
- (id)initWithNativeNavigationItem:(id)arg1;
- (id)leftItems;
- (id)rightItems;
- (id)scriptAttributeKeys;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItems:(id)arg1;
- (void)setLeftItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftMostItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightItems:(id)arg1;
- (void)setRightItems:(id)arg1 animated:(BOOL)arg2;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)tearDownUserInterface;

@end

