//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem
{
    NSMutableSet *_users;
}

@property (strong, nonatomic) NSMutableSet *users; // @synthesize users=_users;

- (void).cxx_destruct;
- (void)addUser:(id)arg1;
- (id)copyParseRules;
- (id)init;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@end

