//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
{
}

+ (void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)placeholderAttachmentForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)placeholderAttachmentForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

