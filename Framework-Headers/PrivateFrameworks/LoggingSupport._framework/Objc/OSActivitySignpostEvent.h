//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityLogMessageEvent.h>

@interface OSActivitySignpostEvent : OSActivityLogMessageEvent
{
    unsigned long long _signpostID;
}

@property (readonly, nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;

- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

