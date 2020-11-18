//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Calculate/NSXMLParserDelegate-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSNumber, NSString;

@interface CurrencyCache : NSObject <NSXMLParserDelegate>
{
    unsigned long long _uuid;
    NSDate *_lastRefreshDate;
    NSDictionary *_currencyData;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
}

@property (strong, nonatomic) NSDictionary *currencyData; // @synthesize currencyData=_currencyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uuid; // @synthesize uuid=_uuid;

+ (id)shared;
- (void)_loadPersistedCurrencyCache;
- (void)_persistCurrencyCache;
- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (BOOL)refresh;
- (BOOL)refreshWithTimeOut:(float)arg1;

@end

