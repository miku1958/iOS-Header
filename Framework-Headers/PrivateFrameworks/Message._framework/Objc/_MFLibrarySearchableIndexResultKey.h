//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMessageCriterion, NSIndexSet;

__attribute__((visibility("hidden")))
@interface _MFLibrarySearchableIndexResultKey : NSObject
{
    MFMessageCriterion *_criterion;
    NSIndexSet *_mailboxIDs;
}

@property (strong, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property (copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

