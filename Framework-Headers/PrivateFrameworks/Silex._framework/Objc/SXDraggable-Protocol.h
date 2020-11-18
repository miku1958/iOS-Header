//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, UIView;
@protocol NSItemProviderWriting;

@protocol SXDraggable

@property (readonly, nonatomic) NSString *dragIdentifier;
@property (readonly, nonatomic) id<NSItemProviderWriting> dragObject;
@property (readonly, nonatomic) UIView *dragPreviewView;

- (void)didEndDragging;
- (void)didStartDragging;
- (NSString *)stringForAXDragAction;
@end
