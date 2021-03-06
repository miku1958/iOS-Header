//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXContextMenuProviding-Protocol.h>

@class NSString, SXTangierController;
@protocol SXActionManager;

@interface SXTextContextMenuProvider : NSObject <SXContextMenuProviding>
{
    SXTangierController *_tangierController;
    id<SXActionManager> _actionManager;
}

@property (readonly, nonatomic) id<SXActionManager> actionManager; // @synthesize actionManager=_actionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXTangierController *tangierController; // @synthesize tangierController=_tangierController;

- (void).cxx_destruct;
- (void)commitPreviewViewController:(id)arg1;
- (id)contextMenuAtLocation:(struct CGPoint)arg1 viewport:(id)arg2;
- (id)initWithTangierController:(id)arg1 actionManager:(id)arg2;
- (void)repAndHyperlinkAtLocation:(struct CGPoint)arg1 viewport:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)targetedPreviewAtLocation:(struct CGPoint)arg1 viewport:(id)arg2;
- (struct CGRect)viewportRectForLinkInRep:(id)arg1 range:(struct _NSRange)arg2 viewport:(id)arg3;

@end

