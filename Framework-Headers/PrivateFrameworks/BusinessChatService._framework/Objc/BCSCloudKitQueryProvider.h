//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCloudKitQueryProviding-Protocol.h>

@class NSString;

@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)queryForFetchBloomFilterAndConfigItemWithType:(long long)arg1;
- (id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;
- (id)queryForFetchShardIdentifier:(id)arg1;

@end

