//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDSearchableIndex.h>

#import <Message/EFLoggable-Protocol.h>
#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class NSString;

@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
- (void)_indexMessage:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3;
- (void)addSearchQueryCancelable:(id)arg1;
- (BOOL)canIndexAttachments;
- (void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3;
- (id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3;
- (BOOL)isPluggedIn;
- (void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2;
- (id)powerObservable;
- (void)removeSearchQueryCancelable:(id)arg1;
- (BOOL)shouldCancelSearchQuery;

@end
