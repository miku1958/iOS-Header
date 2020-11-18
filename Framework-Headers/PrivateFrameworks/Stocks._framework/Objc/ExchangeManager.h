//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ExchangeManager : NSObject
{
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_addExchange:(id)arg1;
- (void)_loadExchangesFromDefaults;
- (void)addExchange:(id)arg1;
- (BOOL)containsExchange:(id)arg1;
- (id)exchangeList;
- (id)exchangeWithName:(id)arg1;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(BOOL)arg2;
- (id)init;
- (void)reloadExchangesFromDefaults;
- (void)removeExchange:(id)arg1;
- (void)saveChanges;

@end

