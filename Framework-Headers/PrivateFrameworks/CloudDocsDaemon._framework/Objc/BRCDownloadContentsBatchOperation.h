//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

__attribute__((visibility("hidden")))
@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation
{
    CDUnknownBlockType _perDownloadCompletionBlock;
}

@property (copy) CDUnknownBlockType perDownloadCompletionBlock; // @synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock;

- (void).cxx_destruct;
- (id)actionPrettyName;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1;
- (void)mainWithTransfers:(id)arg1;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (id)transferredObjectsPrettyName;

@end

