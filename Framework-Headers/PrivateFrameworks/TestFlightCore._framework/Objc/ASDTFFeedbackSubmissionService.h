//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/TFFeedbackSubmissionService-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASDTFFeedbackSubmissionService : NSObject <TFFeedbackSubmissionService>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long maxNumberOfCommentSymbolsAllowed;
@property (readonly, nonatomic) unsigned long long maxNumberOfScreenshotsAllowed;
@property (readonly) Class superclass;

- (id)_serializeFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 error:(id *)arg3;
- (BOOL)_verifyDataSourceIsReadyForSubmission:(id)arg1 error:(id *)arg2;
- (BOOL)_verifyEmailIsValid:(id)arg1;
- (void)submitFeedbackForBundleId:(id)arg1 withContentsOfDataSource:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

