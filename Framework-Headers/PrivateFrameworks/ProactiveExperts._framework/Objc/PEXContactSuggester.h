//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, NSMutableArray, NSMutableDictionary;

@interface PEXContactSuggester : NSObject
{
    CNContactStore *_contactStore;
    NSMutableDictionary *_rankMap;
    NSMutableArray *_predictedPeople;
    NSMutableDictionary *_searchMap;
}

@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) NSMutableArray *predictedPeople; // @synthesize predictedPeople=_predictedPeople;
@property (strong, nonatomic) NSMutableDictionary *rankMap; // @synthesize rankMap=_rankMap;
@property (strong, nonatomic) NSMutableDictionary *searchMap; // @synthesize searchMap=_searchMap;

- (void).cxx_destruct;
- (id)bestContactsWithLimit:(unsigned long long)arg1;
- (void)clearCaches;
- (id)init;
- (double)rankPercentageForContactIdentifier:(id)arg1;
- (id)suggestedContactForDetailString:(id)arg1;
- (id)suggestedContactsForPrefix:(id)arg1;
- (void)waitForData;

@end
