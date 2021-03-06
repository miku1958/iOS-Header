//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

@class TCMessageEntry;

__attribute__((visibility("hidden")))
@interface TCMessageException : NSException
{
    TCMessageEntry *m_entry;
}

+ (id)exceptionWithMessage:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (void)initialize;
+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raise:(id)arg1;
+ (void)raiseUntaggedMessage:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)getEntry;
- (id)initWithMessage:(id)arg1;
- (id)initWithUntaggedMessage:(id)arg1;

@end

