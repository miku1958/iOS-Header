//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSString;
@protocol BCSItemIdentifying;

@protocol BCSLinkQueryChopperDelegate <NSObject>
- (void)_isBusinessRegisteredWithItemIdentifier:(id<BCSItemIdentifying>)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BOOL, BCSConfigItem *, NSError *))arg3;
- (void)_itemWithIdentifier:(id<BCSItemIdentifying>)arg1 forClientBundleID:(NSString *)arg2 completion:(void (^)(BCSItem *, NSError *))arg3;
@end

