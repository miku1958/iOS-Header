//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuLayoutArbiterInput : NSObject
{
    BOOL _shouldUpdateAttachment;
    BOOL _shouldAvoidInputViews;
    UITargetedPreview *_sourcePreview;
    NSArray *_accessoryViews;
    struct CGSize _preferredPreviewSize;
    struct CGSize _preferredMenuSize;
    struct UIEdgeInsets _preferredEdgeInsets;
    CDStruct_a36705e8 _preferredAnchor;
}

@property (strong, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property (nonatomic) CDStruct_a36705e8 preferredAnchor; // @synthesize preferredAnchor=_preferredAnchor;
@property (nonatomic) struct UIEdgeInsets preferredEdgeInsets; // @synthesize preferredEdgeInsets=_preferredEdgeInsets;
@property (nonatomic) struct CGSize preferredMenuSize; // @synthesize preferredMenuSize=_preferredMenuSize;
@property (nonatomic) struct CGSize preferredPreviewSize; // @synthesize preferredPreviewSize=_preferredPreviewSize;
@property (nonatomic) BOOL shouldAvoidInputViews; // @synthesize shouldAvoidInputViews=_shouldAvoidInputViews;
@property (nonatomic) BOOL shouldUpdateAttachment; // @synthesize shouldUpdateAttachment=_shouldUpdateAttachment;
@property (strong, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;

- (void).cxx_destruct;

@end

