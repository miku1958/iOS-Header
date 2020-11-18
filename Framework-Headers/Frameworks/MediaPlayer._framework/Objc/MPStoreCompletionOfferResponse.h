//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPStoreCompletionOfferResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemsByVariant;
    NSDictionary *_responseDictionary;
}

@property (readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)mediaItemsWithStoreOfferVariant:(long long)arg1;

@end

