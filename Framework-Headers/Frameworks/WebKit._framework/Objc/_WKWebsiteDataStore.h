//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _WKWebsiteDataStore : NSObject
{
    struct RetainPtr<WKWebsiteDataStore> _dataStore;
}

@property (readonly, getter=isNonPersistent) BOOL nonPersistent;

+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDataStore:(id)arg1;
- (void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

