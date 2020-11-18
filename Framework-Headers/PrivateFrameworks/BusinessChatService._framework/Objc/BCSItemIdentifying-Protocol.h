//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSObject;
@protocol BCSItemIdentifying;

@protocol BCSItemIdentifying <NSObject>

@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;

- (BOOL)matchesItemIdentifying:(id<BCSItemIdentifying>)arg1;
@end
