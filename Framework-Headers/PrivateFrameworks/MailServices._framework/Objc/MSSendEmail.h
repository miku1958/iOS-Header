//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSMailDefaultService.h>

@interface MSSendEmail : MSMailDefaultService
{
}

+ (id)sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)sendEmail:(id)arg1 playSound:(BOOL)arg2 timeout:(double)arg3 error:(id *)arg4;
+ (id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

