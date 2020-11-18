//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <NotesShared/TTAttachment-Protocol.h>

@class ICAttachment, NSMapTable, NSMutableSet, NSString;

@interface ICTextAttachment : NSTextAttachment <TTAttachment>
{
    ICAttachment *_attachment;
    NSMapTable *_viewsMapTable;
    NSMutableSet *_swappedViewsSet;
}

@property (strong) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableSet *swappedViewsSet; // @synthesize swappedViewsSet=_swappedViewsSet;
@property (strong, nonatomic) NSMapTable *viewsMapTable; // @synthesize viewsMapTable=_viewsMapTable;

+ (BOOL)textAttachmentIsContent:(id)arg1;
+ (id)textAttachmentWithAttachment:(id)arg1;
+ (id)textAttachmentWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)allViews;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentAttributesForAttributedString;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentFileWrapper;
- (id)attachmentIdentifier;
- (id)attachmentUTI;
- (void)clearViewForLayoutManager:(id)arg1;
- (void)dealloc;
- (void)fixAttachmentForAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithAttachment:(id)arg1;
- (struct UIView *)newlyCreatedView;
- (struct UIView *)newlyCreatedViewForManualRendering;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (void)swapBackOldView:(struct UIView *)arg1 fromLayoutManager:(id)arg2 toLayoutManager:(id)arg3;
- (struct UIView *)swapOutOldViewByRecreatingViewFromLayoutManager:(id)arg1 toLayoutManager:(id)arg2 forManualRendering:(BOOL)arg3;
- (struct UIView *)viewForLayoutManager:(id)arg1;
- (struct UIView *)viewForLayoutManagerNoCreate:(id)arg1;

@end

