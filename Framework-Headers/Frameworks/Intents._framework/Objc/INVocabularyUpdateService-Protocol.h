//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INVocabularyUpdateService <NSObject>
- (oneway void)askToSyncSlot:(NSString *)arg1;
- (oneway void)deleteEverything;
- (oneway void)recordVocabulary:(NSArray *)arg1 forIntentSlot:(NSString *)arg2 withValidationCompletion:(void (^)(BOOL))arg3;
@end
