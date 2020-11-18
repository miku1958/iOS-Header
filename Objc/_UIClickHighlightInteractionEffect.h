//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIClickHighlightEffect-Protocol.h>

@class NSString, UITargetedPreview, _UIAnchoredClickHighlightPlatterView;

__attribute__((visibility("hidden")))
@interface _UIClickHighlightInteractionEffect : NSObject <_UIClickHighlightEffect>
{
    long long _phase;
    long long _inflightAnimationCount;
    BOOL _isActive;
    UITargetedPreview *_targetedPreview;
    CDUnknownBlockType _completionBlock;
    _UIAnchoredClickHighlightPlatterView *_highlightPlatter;
    UITargetedPreview *_continuationPreview;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) UITargetedPreview *continuationPreview; // @synthesize continuationPreview=_continuationPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIAnchoredClickHighlightPlatterView *highlightPlatter; // @synthesize highlightPlatter=_highlightPlatter;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
@property (readonly, nonatomic) UITargetedPreview *targetedPreviewForEffectContinuation;

+ (id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2;
- (void).cxx_destruct;
- (void)_completeHighlightEffect;
- (void)_createHighlightPlatter;
- (id)initWithTargetedPreview:(id)arg1 continuingFromPreview:(id)arg2;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end

