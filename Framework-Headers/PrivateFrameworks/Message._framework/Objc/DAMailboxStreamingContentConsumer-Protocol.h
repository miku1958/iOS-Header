//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DAMailMessage;

@protocol DAMailboxStreamingContentConsumer
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(DAMailMessage *)arg4;
- (void)didEndStreamingForMailMessage:(DAMailMessage *)arg1;
- (BOOL)shouldBeginStreamingForMailMessage:(DAMailMessage *)arg1 format:(int)arg2;
@end

