//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIRedeemIdTableViewCellDelegate-Protocol.h>
#import <StoreKitUI/UITableViewDataSource-Protocol.h>
#import <StoreKitUI/UITableViewDelegate-Protocol.h>

@class NSIndexPath, NSString, SKUIClientContext, SKUIPinnedFooterView, UITableView;
@protocol SKUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIRedeemIdManager : NSObject <SKUIRedeemIdTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id<SKUIRedeemIdManagerDelegate> _delegate;
    UITableView *_tableView;
    NSIndexPath *_activeIndexPath;
    SKUIClientContext *_clientContext;
    SKUIPinnedFooterView *_pinnedFooterView;
}

@property (strong, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIRedeemIdManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIPinnedFooterView *pinnedFooterView; // @synthesize pinnedFooterView=_pinnedFooterView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;
- (id)_disclosureAttributedString;
- (double)_heightForDisclosureFooter;
- (long long)_keyboardTypeForIndexPath:(id)arg1;
- (id)_nextIndexPath:(id)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (id)_pcLinkString;
- (id)_placeholderTextForIndexPath:(id)arg1;
- (id)_regulationsLinkString;
- (long long)_returnKeyTypeForIndexPath:(id)arg1;
- (double)_tableViewNonFooterContentHeight;
- (void)dismissActiveCell;
- (void)handleNextPressed;
- (id)initWithClientContext:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;
- (void)setFooterHidden:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

@end

