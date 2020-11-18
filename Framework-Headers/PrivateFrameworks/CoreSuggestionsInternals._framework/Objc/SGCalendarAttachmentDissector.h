//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class EKEventStore, SGAccountsAdapter, SGMEventICSOpportunity;

@interface SGCalendarAttachmentDissector : SGPipelineDissector
{
    SGMEventICSOpportunity *_icsOpportunityTracker;
    SGAccountsAdapter *_accountsAdapter;
    EKEventStore *_ekStore;
}

+ (id)baseAttachmentFrom:(id)arg1 includingEvents:(id)arg2 withRanges:(id)arg3;
+ (long long)replaceTzid:(id)arg1 inDocument:(id)arg2 fromOriginal:(id)arg3 withBaseLength:(unsigned long long)arg4 withEventRange:(struct _NSRange)arg5;
+ (id)splitAttachment:(id)arg1 intoEvents:(id)arg2 withTimezones:(id)arg3;
- (void).cxx_destruct;
- (struct SGMEventICSSourceType_)accountTypeFor:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)downloadedCalendarAttachmentsFrom:(id)arg1;
- (id)enrichmentsFromData:(id)arg1 inDocument:(id)arg2 withParentEntity:(id)arg3;
- (BOOL)hasCalendarAccountForOneOf:(id)arg1;
- (id)init;
- (BOOL)isRequestFromSharedCalendarProvider:(id)arg1;
- (BOOL)shouldIgnoreEntity:(id)arg1;

@end

