//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class NSArray, NSIndexPath, OKCollectionProxy;

@protocol OKCollectionProxyDataSource <NSObject>
- (NSArray *)allKeysForDictionaryProxy:(OKCollectionProxy *)arg1;
- (unsigned long long)countOfDictionaryProxy:(OKCollectionProxy *)arg1;
- (id)dictionaryProxy:(OKCollectionProxy *)arg1 objectForKey:(id)arg2;

@optional
- (id)dictionaryProxy:(OKCollectionProxy *)arg1 objectAtIndexPath:(NSIndexPath *)arg2;
@end

