//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailboxPrediction/NSObject-Protocol.h>

@class NSArray;
@protocol MPActionLogging, MPMessage;

@protocol MPRecommending <NSObject>
- (BOOL)addMessages:(NSArray *)arg1;
- (BOOL)clear;
- (NSArray *)recommendationsForMessage:(id<MPMessage>)arg1 error:(id *)arg2;
- (BOOL)removeMessage:(id<MPMessage>)arg1;
- (BOOL)train;

@optional
- (id<MPActionLogging>)actionLogger;
- (BOOL)synchronize;
@end
