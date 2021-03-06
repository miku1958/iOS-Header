//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>
{
    NSMutableDictionary *_aliasToCNIDMap;
    NSMutableDictionary *_CNIDToAliasesMap;
}

@property (strong, nonatomic) NSMutableDictionary *CNIDToAliasesMap; // @synthesize CNIDToAliasesMap=_CNIDToAliasesMap;
@property (strong, nonatomic) NSMutableDictionary *aliasToCNIDMap; // @synthesize aliasToCNIDMap=_aliasToCNIDMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAliasToCNIDToAliasMap:(id)arg1 withCNID:(id)arg2;
- (id)generateCNIDToAliasesMapFrom:(id)arg1;
- (id)getAliasToCNIDMap;
- (id)getCNIDToAliasesMap;
- (void)handleAddOrUpdateEventForCNContact:(id)arg1;
- (id)initWithAliasToCNIDMap:(id)arg1;
- (id)matchAliasesFromCacheForCNContact:(id)arg1;
- (void)removeAliasFromCNIDToAliasesMap:(id)arg1 withCNID:(id)arg2;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

