//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MPCStoreContentMetadataResponse : NSObject
{
    NSArray *_lookupDictionaries;
}

- (void).cxx_destruct;
- (void)_enumerateStoreItemMetadataItemsWithMetadata:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateContainerItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLookupDictionaries:(id)arg1;

@end

