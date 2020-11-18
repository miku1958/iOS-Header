//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightServices/PRSQueryTask.h>

@class PARSession, PARTask, SFSearchSuggestion;

@interface PRSCoreParsecQueryTask : PRSQueryTask
{
    PARSession *_parSession;
    BOOL _parsecEnabled;
    SFSearchSuggestion *_suggestion;
    PARTask *_task;
}

@property (strong, nonatomic) SFSearchSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property (strong) PARTask *task; // @synthesize task=_task;

- (void).cxx_destruct;
- (void)handleResults:(id)arg1;
- (id)initWithSession:(id)arg1 parsecSession:(id)arg2 handler:(id)arg3 queue:(id)arg4 queryContext:(id)arg5 queryIdent:(unsigned long long)arg6;
- (BOOL)needsBag;
- (void)resume;
- (void)setParsecState:(BOOL)arg1;

@end
