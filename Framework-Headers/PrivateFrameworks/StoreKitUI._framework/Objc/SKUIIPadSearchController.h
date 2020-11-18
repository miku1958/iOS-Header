//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISearchFieldDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUISearchFieldController, UIViewController;

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate>
{
    SKUISearchFieldController *_searchFieldController;
    UIViewController *_parentViewController;
    SKUIClientContext *_clientContext;
}

@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property (readonly, nonatomic) SKUISearchFieldController *searchFieldController;
@property (readonly) Class superclass;

+ (id)lastSearchTerm;
+ (void)setLastSearchTerm:(id)arg1;
- (void).cxx_destruct;
- (id)_searchFieldController;
- (void)_termDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithParentViewController:(id)arg1;
- (id)newSearchFieldBarItem;
- (void)reloadSearchField;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)setSearchFieldPlaceholderText:(id)arg1;
- (void)setSearchFieldText:(id)arg1;

@end

