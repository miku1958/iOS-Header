//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSError, RTPersistenceContext;

@protocol RTPersistenceContextDelegate <NSObject>
- (void)persistenceContext:(RTPersistenceContext *)arg1 encounteredError:(NSError *)arg2;
- (BOOL)persistenceContextPerformedSave:(RTPersistenceContext *)arg1 error:(id *)arg2;
- (BOOL)persistenceContextShouldExecute:(RTPersistenceContext *)arg1;
@end

