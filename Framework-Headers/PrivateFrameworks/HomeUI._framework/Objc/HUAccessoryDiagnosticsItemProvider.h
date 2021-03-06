//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HUAccessoryDiagnosticsItemManager, NSMutableSet;

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider
{
    NSMutableSet *_diagnosticItems;
    HUAccessoryDiagnosticsItemManager *_itemManager;
}

@property (strong, nonatomic) NSMutableSet *diagnosticItems; // @synthesize diagnosticItems=_diagnosticItems;
@property (weak, nonatomic) HUAccessoryDiagnosticsItemManager *itemManager; // @synthesize itemManager=_itemManager;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemManager:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

