//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class DOCAttachmentCell;

@interface DOCTextAttachment : NSTextAttachment
{
    DOCAttachmentCell *_cell;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;

- (void).cxx_destruct;
- (id)attachmentCell;
- (id)initWithContentView:(id)arg1;

@end

