//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCloudServerBodyProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSV1CloudServerBodyProvider : NSObject <BCSCloudServerBodyProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bodyDictionaryForBusinessItemRequestWithBizID:(id)arg1;
- (id)bodyDictionaryForBusinessItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
- (id)bodyDictionaryForChatSuggestBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3;
- (id)bodyDictionaryForConfigItemWithType:(long long)arg1;
- (id)bodyForBloomFilterRequestWithStartIndex:(long long)arg1 shardCount:(long long)arg2 type:(long long)arg3;
- (id)bodyForBusinessItemRequestWithBizID:(id)arg1;
- (id)bodyForConfigItemRequestWithType:(long long)arg1;
- (id)bodyForItemRequestWithBucketStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
- (id)jsonDataForBodyDictionary:(id)arg1;

@end

