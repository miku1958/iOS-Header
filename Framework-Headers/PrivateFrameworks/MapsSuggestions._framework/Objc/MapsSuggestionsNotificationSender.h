//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MapsSuggestionsNotificationSender : NSObject
{
    struct unique_ptr<MSg::NotificationSender, std::__1::default_delete<MSg::NotificationSender>> _sender;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithDarwinNotification:(const char *)arg1;
- (void)notify;
- (void)notifyWithPayloadString:(id)arg1;
- (void)notifyWithState:(unsigned long long)arg1;

@end
