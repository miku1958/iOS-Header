//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAttachmentItem.h>

@interface CKLocationAttachmentItem : CKAttachmentItem
{
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;

+ (id)UTITypes;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 guid:(id)arg3;
- (BOOL)isDroppedPin;
- (id)pin;
- (id)vCardURLProperties;

@end
