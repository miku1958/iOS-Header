//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSXPCService.h>

#import <MailServices/MSDSearchResultsProtocol-Protocol.h>

@class NSString;
@protocol MSSearchDelegate;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol>
{
    id<MSSearchDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MSSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3 delegate:(id)arg4;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5;
+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 onlyInboxes:(BOOL)arg5 delegate:(id)arg6;
+ (void)setUnitTestingResultsArray:(id)arg1;
- (void).cxx_destruct;
- (void)_delegateDidFindResults:(id)arg1;
- (void)_delegateDidFinishWithError:(id)arg1;
- (void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned long long)arg3;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;
- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_initWithDelegate:(id)arg1;
- (BOOL)_unitTestsAreEnabled;
- (void)cancel;
- (void)foundResults:(id)arg1 error:(id)arg2;
- (id)initWithRemoteObjectInterface:(id)arg1;
- (id)newConnectionForInterface:(id)arg1;

@end

