//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardCandidateView.h>

#import <UIKitCore/UIKeyboardCandidateViewInline-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline>
{
    struct CGRect _collapsedRect;
    struct CGSize presentationSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize presentationSize; // @synthesize presentationSize;
@property (readonly) Class superclass;

+ (double)defaultExtendedControlHeight;
- (id)_inheritedRenderConfig;
- (unsigned long long)_numberOfColumns:(BOOL)arg1;
- (id)activeCandidateList;
- (void)candidatesDidChange;
- (int)candidatesVisualStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (BOOL)shouldUseKeyboardBackground:(id)arg1;

@end

