//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppMenuBarDocumentDelegate-Protocol.h>

@class IKAppMenuBarDocument, NSArray, NSString, SKUIMenuItemViewElement;
@protocol SKUIMenuBarViewElementConfigurationDelegate, _SKUIMenuBarViewElementConfigurationReloadDelegate;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarViewElementConfiguration : NSObject <IKAppMenuBarDocumentDelegate>
{
    IKAppMenuBarDocument *_menuBarDocument;
    long long _menuBarStyle;
    NSArray *_menuItemViewElements;
    BOOL _scrollEnabled;
    SKUIMenuItemViewElement *_selectedMenuItemViewElement;
    BOOL _needsReload;
    id<SKUIMenuBarViewElementConfigurationDelegate> _delegate;
    id<_SKUIMenuBarViewElementConfigurationReloadDelegate> _reloadDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIMenuBarViewElementConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long menuBarStyle;
@property (nonatomic, getter=_needsReload, setter=_setNeedsReload:) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property (readonly, nonatomic) unsigned long long numberOfMenuItems;
@property (weak, nonatomic, getter=_reloadDelegate, setter=_setReloadDelegate:) id<_SKUIMenuBarViewElementConfigurationReloadDelegate> reloadDelegate; // @synthesize reloadDelegate=_reloadDelegate;
@property (readonly, nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property (readonly, nonatomic) SKUIMenuItemViewElement *selectedMenuItemViewElement; // @synthesize selectedMenuItemViewElement=_selectedMenuItemViewElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureDataLoaded;
- (id)_initWithMenuBarDocument:(id)arg1;
- (void)_reloadWithMenuBarStyle:(long long)arg1 menuItemViewElements:(id)arg2 scrollEnabled:(BOOL)arg3;
- (void)contentWillAppearForMenuItemAtIndex:(unsigned long long)arg1 withEntityValueProvider:(id)arg2 clientContext:(id)arg3;
- (id)documentForEntityUniqueIdentifier:(id)arg1;
- (id)documentForMenuItemAtIndex:(unsigned long long)arg1;
- (id)documentOptionsForEntityUniqueIdentifier:(id)arg1;
- (id)documentOptionsForMenuItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfMenuItemViewElement:(id)arg1;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForEntityWithUniqueIdentifier:(id)arg2;
- (void)menuBarDocument:(id)arg1 didReplaceDocumentForMenuItem:(id)arg2;
- (void)menuBarDocument:(id)arg1 didSelectMenuItem:(id)arg2 animated:(BOOL)arg3;

@end
