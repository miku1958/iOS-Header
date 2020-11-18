//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/TKTokenAccessDB-Protocol.h>

@class NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB>
{
    NSUserDefaults *_db;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyRefForRequest:(id)arg1;
- (void)clearAllAccessRecords;
- (long long)fetchAccessForRequest:(id)arg1;
- (id)init;
- (void)storeAccess:(long long)arg1 forRequest:(id)arg2;

@end
