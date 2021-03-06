//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTWritablePrivateDataStorage-Protocol.h>

@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue, NSString;

@interface NTWritablePrivateDataStorage : NSObject <NTWritablePrivateDataStorage>
{
    FCFileCoordinatedTodayDropbox *_dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue *_transactionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FCFileCoordinatedTodayDropbox *dropbox; // @synthesize dropbox=_dropbox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (void)writeReadHistoryItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)writeSeenHistoryItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

