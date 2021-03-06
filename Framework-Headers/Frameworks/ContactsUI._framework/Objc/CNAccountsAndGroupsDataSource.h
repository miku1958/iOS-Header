//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAccountsAndGroupsItem, CNContactStore, CNContactStoreFilter, NSArray;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsDataSource : NSObject
{
    CNContactStoreFilter *_filter;
    CNContactStoreFilter *_serverFilter;
    BOOL _hidesSearchableSources;
    CNContactStore *_store;
    NSArray *_sections;
    CNAccountsAndGroupsItem *_rootItem;
}

@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic) BOOL hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property (strong, nonatomic) CNAccountsAndGroupsItem *rootItem; // @synthesize rootItem=_rootItem;
@property (strong, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property (readonly, nonatomic) CNContactStoreFilter *serverFilter;
@property (readonly, nonatomic) CNAccountsAndGroupsItem *showAllSectionItem;
@property (strong, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property (readonly, nonatomic, getter=isTrivial) BOOL trivial;

- (void).cxx_destruct;
- (void)_applyFilter;
- (void)_reloadSections;
- (id)initWithStore:(id)arg1;
- (void)reload;
- (void)removeServerFilter;
- (void)setServerFilterForItem:(id)arg1;
- (void)updateRootItemSelection;

@end

