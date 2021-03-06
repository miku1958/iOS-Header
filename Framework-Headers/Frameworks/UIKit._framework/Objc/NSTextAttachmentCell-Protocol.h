//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSLayoutManager, NSTextAttachment, NSTextContainer, UIView;

@protocol NSTextAttachmentCell <NSObject>
- (NSTextAttachment *)attachment;
- (struct CGPoint)cellBaselineOffset;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3 layoutManager:(NSLayoutManager *)arg4;
- (void)setAttachment:(NSTextAttachment *)arg1;

@optional
- (struct CGRect)cellFrameForTextContainer:(NSTextContainer *)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(UIView *)arg2 characterIndex:(unsigned long long)arg3;
@end

