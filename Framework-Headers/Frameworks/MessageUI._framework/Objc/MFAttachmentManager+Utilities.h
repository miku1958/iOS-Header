//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFAttachmentManager.h>

@interface MFAttachmentManager (Utilities)
- (void)attachmentForCID:(id)arg1 isBasicImage:(CDUnknownBlockType)arg2;
- (void)attachmentForCID:(id)arg1 isDisplayableImage:(CDUnknownBlockType)arg2;
- (void)filenameAndURLForAttachmentForCID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hasAttachmentForCID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)sizeForScale:(unsigned long long)arg1 imagesOnly:(BOOL)arg2 forContext:(id)arg3;
@end
