//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary;
@protocol TUConversationManagerDataSource;

@protocol TUConversationManagerDataSourceDelegate <NSObject>
- (void)conversationsChangedForDataSource:(id<TUConversationManagerDataSource>)arg1 oldConversationsByGroupUUID:(NSDictionary *)arg2;
@end

