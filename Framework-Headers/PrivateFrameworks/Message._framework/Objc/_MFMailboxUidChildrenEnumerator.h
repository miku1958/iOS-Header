//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    unsigned long long _index;
    BOOL _includeHidden;
}

- (void).cxx_destruct;
- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2;
- (id)nextObject;

@end
