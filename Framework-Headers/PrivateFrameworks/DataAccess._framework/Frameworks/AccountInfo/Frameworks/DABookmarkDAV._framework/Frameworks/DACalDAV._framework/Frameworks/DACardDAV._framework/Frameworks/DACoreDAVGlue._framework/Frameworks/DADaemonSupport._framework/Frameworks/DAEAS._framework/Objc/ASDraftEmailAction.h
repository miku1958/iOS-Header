//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction
{
    BOOL _send;
}

@property (nonatomic) BOOL send; // @synthesize send=_send;

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 send:(BOOL)arg3;

@end
