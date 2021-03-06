//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDMessagePersistence, EFQuery, EMMailboxScope, NSCache, NSString;

@interface EDMessageQueryEvaluator : NSObject <EFLoggable>
{
    EFQuery *_messageQuery;
    EDMessagePersistence *_messagePersistence;
    EMMailboxScope *_mailboxScope;
    NSCache *_spotlightPredicateCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property (readonly, nonatomic) EFQuery *messageQuery; // @synthesize messageQuery=_messageQuery;
@property (strong, nonatomic) NSCache *spotlightPredicateCache; // @synthesize spotlightPredicateCache=_spotlightPredicateCache;
@property (readonly) Class superclass;

+ (id)log;
- (void).cxx_destruct;
- (id)filterMessages:(id)arg1 unmatchedMessages:(id *)arg2;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2;
- (id)transformAndFilterMessages:(id)arg1;
- (id)transformAndFilterMessages:(id)arg1 includeDeleted:(BOOL)arg2;
- (id)transformMessages:(id)arg1;
- (id)transformMessages:(id)arg1 includeDeleted:(BOOL)arg2;

@end

