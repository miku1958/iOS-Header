//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface HDDatabaseTransactionContextStatistics : NSObject
{
    NSMutableArray *_transactions;
}

@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, copy, nonatomic) NSArray *transactions;

- (void).cxx_destruct;
- (void)_addTransactionStatistics:(id)arg1;
- (id)init;

@end

