//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAttachmentItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKLocationAttachmentItem : CKAttachmentItem
{
    NSString *_locationTitle;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (copy, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;

+ (id)UTITypes;
- (void).cxx_destruct;
- (id)_generateThumbnailFillToSize:(struct CGSize)arg1;
- (void)generatePreviewWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize)arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;
- (BOOL)isDroppedPin;
- (id)vCardURLProperties;

@end

