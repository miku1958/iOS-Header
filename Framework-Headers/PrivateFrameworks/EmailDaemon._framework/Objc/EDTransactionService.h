//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject
{
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void).cxx_destruct;
- (void)endTransaction:(id)arg1;
- (BOOL)hasPendingTransactions;
- (id)initWithServiceName:(id)arg1;
- (void)resetPendingTransactions;
- (id)startTransaction;

@end
