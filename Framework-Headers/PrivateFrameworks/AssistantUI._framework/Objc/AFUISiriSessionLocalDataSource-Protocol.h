//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFUISiriSession, NSArray;

@protocol AFUISiriSessionLocalDataSource <NSObject>
- (NSArray *)bulletinsForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)contextAppInfosForSiriSession:(AFUISiriSession *)arg1;
- (unsigned long long)lockStateForSiriSession:(AFUISiriSession *)arg1;
@end

