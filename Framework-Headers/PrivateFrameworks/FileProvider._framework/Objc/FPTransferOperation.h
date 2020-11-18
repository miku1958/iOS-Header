//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

#import <FileProvider/NSProgressReporting-Protocol.h>

@class FPAggregateProgress, FPItem, NSArray, NSDictionary, NSMutableDictionary, NSOperationQueue, NSProgress, NSString;

@interface FPTransferOperation : FPActionOperation <NSProgressReporting>
{
    NSArray *_nameURLList;
    NSArray *_items;
    FPItem *_destinationFolder;
    FPAggregateProgress *_progress;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_placeholderIDsByURLOrItemID;
    NSMutableDictionary *_errorsByItem;
    NSMutableDictionary *_transferResults;
    unsigned long long _lastUsageUpdatePolicy;
    BOOL _isCopyOperation;
    BOOL _shouldBounceOnCollision;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *errorsByItem; // @synthesize errorsByItem=_errorsByItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastUsageUpdatePolicy; // @synthesize lastUsageUpdatePolicy=_lastUsageUpdatePolicy;
@property (readonly) NSProgress *progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL shouldBounceOnCollision; // @synthesize shouldBounceOnCollision=_shouldBounceOnCollision;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDictionary *transferResults; // @synthesize transferResults=_transferResults;

- (void).cxx_destruct;
- (id)_initWithNamesAndURLsList:(id)arg1 destinationFolder:(id)arg2 copyItems:(BOOL)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 destinationFolder:(id)arg2 copyItems:(BOOL)arg3;
- (id)initWithNamesAndSourceURLs:(id)arg1 destinationFolder:(id)arg2 copyItems:(BOOL)arg3;
- (id)initWithSourceURLs:(id)arg1 destinationFolder:(id)arg2 copyItems:(BOOL)arg3;
- (id)initWithSourceURLsAndNames:(id)arg1 destinationFolder:(id)arg2 copyItems:(BOOL)arg3;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)operationDescription;
- (void)presendNotifications;

@end

