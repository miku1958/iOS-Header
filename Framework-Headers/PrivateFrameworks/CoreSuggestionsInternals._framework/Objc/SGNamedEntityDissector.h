//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

#import <CoreSuggestionsInternals/SGMailMessageProcessing-Protocol.h>
#import <CoreSuggestionsInternals/SGTextMessageProcessing-Protocol.h>

@class NSString, _PASLock;

@interface SGNamedEntityDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>
{
    _PASLock *_lock;
    BOOL _significanceCheckEnabled;
    int _linguisticDataNotificationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_collectCustomTaggerResultsWithText:(id)arg1 eligibleRegions:(id)arg2 isMessagesSource:(BOOL)arg3 addNamedEntity:(CDUnknownBlockType)arg4;
- (id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 dataDetections:(id)arg3 isMessagesSource:(BOOL)arg4 lookupQids:(id)arg5 addNamedEntity:(CDUnknownBlockType)arg6;
- (void)_collectNLPTaggerResultsWithText:(id)arg1 ddMatches:(id)arg2 eligibleRegions:(id)arg3 isMessagesSource:(BOOL)arg4 addNamedEntity:(CDUnknownBlockType)arg5;
- (void)_dissectMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(BOOL)arg5 algorithms:(id)arg6;
- (void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 enrichment:(id)arg4 algorithm:(unsigned short)arg5;
- (void)_registerForNotifications;
- (void)dealloc;
- (void)dissectMailMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (void)dissectTextMessage:(id)arg1 entity:(id)arg2 context:(id)arg3;
- (id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(BOOL)arg4 algorithms:(id)arg5;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(BOOL)arg1;

@end
