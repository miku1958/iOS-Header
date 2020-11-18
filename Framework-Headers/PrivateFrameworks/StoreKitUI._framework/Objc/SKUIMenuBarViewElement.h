//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

#import <StoreKitUI/SKUIMenuBarViewElement-Protocol.h>
#import <StoreKitUI/_SKUIMenuBarViewElementConfigurationReloadDelegate-Protocol.h>

@class NSArray, NSString, SKUIMenuBarViewElementConfiguration;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement>
{
    NSArray *_titleViewElements;
    SKUIMenuBarViewElementConfiguration *_configuration;
}

@property (strong, nonatomic) SKUIMenuBarViewElementConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_shelfMenuBarViewElementClass;
+ (Class)_titlesMenuBarViewElementClass;
+ (id)supportedFeatures;
- (void).cxx_destruct;
- (void)_menuBarViewElementConfigurationRequestsReload:(id)arg1;
- (void)_reloadMenuItems;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)titleForMenuItemAtIndex:(unsigned long long)arg1;

@end

