//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _BRCUploadInfo : _BRCTransferInfo
{
    NSMutableSet *_outOfQuotaDocIDs;
}

@property (readonly, nonatomic) BOOL allUploadsPendingQuota;
@property (readonly, nonatomic) NSMutableSet *outOfQuotaDocIDs; // @synthesize outOfQuotaDocIDs=_outOfQuotaDocIDs;

- (void).cxx_destruct;
- (void)copyProgressInfoToProgress:(id)arg1 options:(BOOL)arg2;
- (id)description;
- (id)init;
- (void)updateLocalizedDescriptionWithOptions:(BOOL)arg1;

@end

