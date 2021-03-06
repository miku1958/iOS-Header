//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class CSSearchableItem, EDSearchableIndexVerificationData, EMSearchableIndexQueryExpression, NSArray, NSDictionary;

@protocol EDSearchableIndexTesting <NSObject>

@property (readonly, copy, nonatomic) NSArray *fetchAttributes;

- (EMSearchableIndexQueryExpression *)expressionFromDataSamples:(NSDictionary *)arg1;
- (EDSearchableIndexVerificationData *)transformDataForVerification:(EDSearchableIndexVerificationData *)arg1;
- (BOOL)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(EDSearchableIndexVerificationData *)arg2;
@end

