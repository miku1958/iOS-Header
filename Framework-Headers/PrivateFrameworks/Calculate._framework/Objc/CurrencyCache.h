//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Calculate/NSXMLParserDelegate-Protocol.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSMutableString, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface CurrencyCache : NSObject <NSXMLParserDelegate>
{
    unsigned long long _uuid;
    NSDate *_lastRefreshDate;
    NSDictionary *_currencyData;
    NSString *_currentCurrency;
    NSNumber *_currentRate;
    NSMutableString *_currentString;
    NSMutableDictionary *_mutableCurrencyCache;
    NSObject<OS_dispatch_queue> *_serializer;
}

@property (strong, nonatomic) NSDictionary *currencyData; // @synthesize currencyData=_currencyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *lastRefreshDate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serializer; // @synthesize serializer=_serializer;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uuid; // @synthesize uuid=_uuid;

+ (id)shared;
- (void).cxx_destruct;
- (id)_consumerKey;
- (id)_consumerSecret;
- (void)_loadPersistedCurrencyCache;
- (void)_queue_loadPersistedCurrencyCache;
- (void)_queue_persistCurrencyCache;
- (BOOL)_queue_refresh;
- (id)createCredential;
- (id)init;
- (BOOL)refresh;
- (BOOL)refreshWithTimeOut:(float)arg1;
- (BOOL)updateCurrencyCacheWithData:(id)arg1;

@end

