//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent
{
    unsigned long long _creatorActivityID;
    unsigned long long _creatorProcessUniqueID;
    unsigned long long _senderProgramCounter;
}

@property (readonly, nonatomic) unsigned long long creatorActivityID; // @synthesize creatorActivityID=_creatorActivityID;
@property (readonly, nonatomic) unsigned long long creatorProcessUniqueID; // @synthesize creatorProcessUniqueID=_creatorProcessUniqueID;
@property (readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;

- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

