//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITargetedDragPreview, UITextPosition, UITextRange, UIView;

@protocol UITextDraggableGeometry <NSObject>

@property (nonatomic) long long geometryOptions;

- (NSArray *)draggableObjectsForTextRange:(UITextRange *)arg1;
- (UITargetedDragPreview *)previewForDroppingTextInRange:(UITextRange *)arg1 toPosition:(UITextPosition *)arg2 inContainerView:(UIView *)arg3;
- (UITargetedDragPreview * (^)(UIView *, BOOL))targetedPreviewProviderForTextInRange:(struct _NSRange)arg1 dismissing:(BOOL)arg2;
- (UITextRange *)textRangeForAttachmentInTextRange:(UITextRange *)arg1 atPoint:(struct CGPoint)arg2;
- (NSArray *)textRangesForAttachmentsInTextRange:(UITextRange *)arg1;
@end

