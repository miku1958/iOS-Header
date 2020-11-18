//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextPasteCoordinatorDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol UITextPasteConfigurationSupporting_Internal;

__attribute__((visibility("hidden")))
@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate>
{
    NSMapTable *_sessions;
    id<UITextPasteConfigurationSupporting_Internal> _supportingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<UITextPasteConfigurationSupporting_Internal> supportingView; // @synthesize supportingView=_supportingView;

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_clampRange:(id)arg1;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_executePasteForSession:(id)arg1;
- (BOOL)_pasteDelegateHandlesPasting;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_restorePasteResultForSession:(id)arg1;
- (void)_transformTextPasteItem:(id)arg1;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(BOOL)arg4;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(BOOL)arg4 delegate:(id)arg5;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(BOOL)arg4;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)initWithSupportingView:(id)arg1;

@end
