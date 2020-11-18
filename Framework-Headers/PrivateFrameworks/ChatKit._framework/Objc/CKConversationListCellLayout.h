//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CKConversationListCellLayout : NSObject
{
    BOOL _invalid;
    BOOL _shouldShowChevron;
    double _summaryLabelCapFrameYOrigin;
    struct CGRect _tableBounds;
    struct CGRect _summaryFrame;
    struct CGRect _summaryFrameWhenSummarizingAttachment;
    struct CGRect _dateFrame;
    struct CGRect _senderFrame;
    struct CGRect _senderFrameWhenUnread;
    struct CGRect _groupViewFrame;
    struct CGRect _attachmentIconFrame;
    struct CGRect _chevronFrame;
    struct CGRect _unreadFrame;
}

@property (nonatomic) struct CGRect attachmentIconFrame; // @synthesize attachmentIconFrame=_attachmentIconFrame;
@property (nonatomic) struct CGRect chevronFrame; // @synthesize chevronFrame=_chevronFrame;
@property (nonatomic) struct CGRect dateFrame; // @synthesize dateFrame=_dateFrame;
@property (nonatomic) struct CGRect groupViewFrame; // @synthesize groupViewFrame=_groupViewFrame;
@property (nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property (nonatomic) struct CGRect senderFrame; // @synthesize senderFrame=_senderFrame;
@property (nonatomic) struct CGRect senderFrameWhenUnread; // @synthesize senderFrameWhenUnread=_senderFrameWhenUnread;
@property (nonatomic) BOOL shouldShowChevron; // @synthesize shouldShowChevron=_shouldShowChevron;
@property (nonatomic) struct CGRect summaryFrame; // @synthesize summaryFrame=_summaryFrame;
@property (nonatomic) struct CGRect summaryFrameWhenSummarizingAttachment; // @synthesize summaryFrameWhenSummarizingAttachment=_summaryFrameWhenSummarizingAttachment;
@property (nonatomic) double summaryLabelCapFrameYOrigin; // @synthesize summaryLabelCapFrameYOrigin=_summaryLabelCapFrameYOrigin;
@property (nonatomic) struct CGRect tableBounds; // @synthesize tableBounds=_tableBounds;
@property (nonatomic) struct CGRect unreadFrame; // @synthesize unreadFrame=_unreadFrame;

+ (id)sharedInstance;
- (id)init;
- (void)invalidate;

@end

