//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKScribbleInteractionWrapperProvider-Protocol.h>
#import <PencilKit/UIInteraction-Protocol.h>

@class NSString, UIView;
@protocol PKPencilTextInputElementInteractionDelegate, PKScribbleInteractionWrapper;

@interface PKPencilTextInputElementInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>
{
    id<PKScribbleInteractionWrapper> _cachedWrapper;
    id<PKPencilTextInputElementInteractionDelegate> _delegate;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPencilTextInputElementInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)_pencilTextInputElementInteractionInView:(id)arg1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)scribbleInteractionWrapper;
- (void)willMoveToView:(id)arg1;

@end

