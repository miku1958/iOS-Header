//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@interface DAResponse : DAAction
{
    long long _status;
}

@property (nonatomic) long long status; // @synthesize status=_status;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;

@end
