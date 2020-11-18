//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSItemCaching-Protocol.h>

@class BCSBusinessItem, NSData;

@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching>
{
    BCSBusinessItem *_lastFetchedBusinessItem;
    BCSBusinessItem *_bizItemForLastFetchedIcon;
    NSData *_lastFetchedBusinessItemIconData;
}

@property (strong, nonatomic) BCSBusinessItem *bizItemForLastFetchedIcon; // @synthesize bizItemForLastFetchedIcon=_bizItemForLastFetchedIcon;
@property (strong, nonatomic) BCSBusinessItem *lastFetchedBusinessItem; // @synthesize lastFetchedBusinessItem=_lastFetchedBusinessItem;
@property (strong, nonatomic) NSData *lastFetchedBusinessItemIconData; // @synthesize lastFetchedBusinessItemIconData=_lastFetchedBusinessItemIconData;

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)deleteCache;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (id)itemMatching:(id)arg1;
- (id)lastFetchedBusinessItemIconDataForBizItem:(id)arg1;
- (void)setLastFetchedBusinesIconData:(id)arg1 withMatchingBusinessItem:(id)arg2;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;

@end
