//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICLegacyAttachment : NSObject
{
}

+ (id)attachmentWithContentID:(id)arg1 context:(id)arg2;
+ (id)contentIDStringFromCIDURL:(id)arg1;
+ (void)importFileAtURL:(id)arg1 toAttachment:(id)arg2;
+ (void)importLegacyAttachment:(id)arg1 toNote:(id)arg2;
+ (id)typeUTIFromFileURL:(id)arg1 mimeType:(id)arg2;

@end
