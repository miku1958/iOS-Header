//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/SBKRequestHandler.h>

@class SBKTransactionController;

__attribute__((visibility("hidden")))
@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler
{
    BOOL _canceled;
    SBKTransactionController *_transactionController;
}

@property (readonly, nonatomic) BOOL canceled; // @synthesize canceled=_canceled;
@property (readonly, nonatomic) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)initWithBagContext:(id)arg1;
- (void)scheduleTransaction:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2;
- (void)timeout;

@end

