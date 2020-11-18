//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NDAnalyticsEnvelopeTracker-Protocol.h>

@class NSString;

@interface NSSNewsAnalyticsEnvelopeTrackerProxy : NSObject <NDAnalyticsEnvelopeTracker>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3;
- (void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1;
- (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1;
- (void)registerEnvelopeContentTypesAsUploaded:(id)arg1;
- (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;
- (void)registerEnvelopesAsCreated:(id)arg1;
- (void)registerEnvelopesAsReceivedByUploader:(id)arg1;
- (void)registerEnvelopesAsSubmittedToUploader:(id)arg1;

@end
