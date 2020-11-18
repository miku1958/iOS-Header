//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (NSURLPromisedItems)
- (id)_fixedUpSideFaultError:(id)arg1;
- (void)_performWithPhysicalURL:(CDUnknownBlockType)arg1;
- (long long)_promiseExtensionConsume;
- (void)_promiseExtensionRelease:(long long)arg1;
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;
- (BOOL)checkPromisedItemIsReachableAndReturnError:(id *)arg1;
- (BOOL)getPromisedItemResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id *)arg2;
@end

