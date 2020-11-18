//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSString, SUItem, SUItemList, SUPageSectionGroup, SUStorePageProtocol;

@interface SUStructuredPage : NSObject <NSCopying>
{
    BOOL _artworkShouldFitWidth;
    double _artworkWidth;
    BOOL _didShowDialog;
    long long _displayStyle;
    SUItem *_item;
    SUItemList *_itemList;
    SUStorePageProtocol *_protocol;
    SUPageSectionGroup *_sectionsGroup;
    BOOL _shouldHideSignInButton;
    NSString *_title;
    long long _type;
    BOOL _wantsIndexBar;
}

@property (readonly, nonatomic) BOOL artworkShouldFitWidth; // @synthesize artworkShouldFitWidth=_artworkShouldFitWidth;
@property (readonly, nonatomic) double artworkWidth; // @synthesize artworkWidth=_artworkWidth;
@property (readonly, nonatomic) BOOL didShowDialog; // @synthesize didShowDialog=_didShowDialog;
@property (readonly, nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property (readonly, nonatomic) BOOL hasDisplayableContent;
@property (strong, nonatomic) SUItem *item; // @synthesize item=_item;
@property (strong, nonatomic) SUItemList *itemList; // @synthesize itemList=_itemList;
@property (strong, nonatomic) SUStorePageProtocol *protocol; // @synthesize protocol=_protocol;
@property (strong, nonatomic) SUPageSectionGroup *sectionsGroup; // @synthesize sectionsGroup=_sectionsGroup;
@property (readonly, nonatomic) BOOL shouldHideSignInButton; // @synthesize shouldHideSignInButton=_shouldHideSignInButton;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) BOOL wantsIndexBar; // @synthesize wantsIndexBar=_wantsIndexBar;

+ (long long)pageTypeForStorePageDictionary:(id)arg1;
+ (long long)pageTypeForStorePageString:(id)arg1;
- (id)_copyItemFromDictionary:(id)arg1;
- (long long)_displayStyleForString:(id)arg1;
- (void)_parseItemsFromDictionary:(id)arg1;
- (void)_parseProtocolFromDictionary:(id)arg1;
- (void)_parseTemplateParametersFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)loadFromDictionary:(id)arg1;

@end
