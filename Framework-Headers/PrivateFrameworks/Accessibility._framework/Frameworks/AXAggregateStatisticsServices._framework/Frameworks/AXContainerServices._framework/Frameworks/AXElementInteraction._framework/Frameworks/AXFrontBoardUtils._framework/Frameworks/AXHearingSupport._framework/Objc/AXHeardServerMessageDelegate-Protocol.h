//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol AXHeardServerMessageDelegate <NSObject>
- (void)handleMessageError:(NSString *)arg1 destructive:(BOOL)arg2;
- (void)handleMessageWithPayload:(NSDictionary *)arg1 forIdentifier:(unsigned long long)arg2;
@end

