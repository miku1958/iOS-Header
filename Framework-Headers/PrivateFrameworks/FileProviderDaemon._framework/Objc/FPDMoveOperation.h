//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPDActionOperation.h>

@class FPDActionOperationQueue, FPDMoveReader, FPDMoveWriter, FPMoveInfo;

@interface FPDMoveOperation : FPDActionOperation
{
    FPDMoveReader *_reader;
    FPDMoveWriter *_writer;
    FPDActionOperationQueue *_queue;
}

@property (readonly, nonatomic) FPMoveInfo *info; // @dynamic info;

+ (BOOL)_validateInfo:(id)arg1;
- (void).cxx_destruct;
- (void)_t_unblockReader;
- (void)cancel;
- (void)cancelRoot:(id)arg1;
- (void)dumpStateTo:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3;
- (void)main;
- (id)moveInfo;
- (void)sendPastUpdatesToClient:(id)arg1;

@end
