//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXContextMenuManager-Protocol.h>
#import <Silex/UIContextMenuInteractionDelegate-Protocol.h>

@class NSMutableArray, NSString, SXViewport, UITargetedPreview;
@protocol SXContextMenuManagerDelegate, SXContextMenuProviding;

@interface SXContextMenuManager : NSObject <UIContextMenuInteractionDelegate, SXContextMenuManager>
{
    id<SXContextMenuManagerDelegate> delegate;
    SXViewport *_viewport;
    NSMutableArray *_providers;
    id<SXContextMenuProviding> _activeProvider;
    UITargetedPreview *_activePreview;
}

@property (strong, nonatomic) UITargetedPreview *activePreview; // @synthesize activePreview=_activePreview;
@property (strong, nonatomic) id<SXContextMenuProviding> activeProvider; // @synthesize activeProvider=_activeProvider;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXContextMenuManagerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;

- (void).cxx_destruct;
- (void)addProvider:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)didEndPreviewing;
- (id)initWithViewport:(id)arg1;
- (void)registerOnView:(id)arg1;
- (BOOL)shouldStartPreviewing;
- (void)willStartPreviewing;

@end

