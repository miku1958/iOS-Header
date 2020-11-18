//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIPreviewInteractionHighlighting-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>
{
    BOOL _blinderViewEnabled;
    UIView *_initialSnapshotView;
    UIView *_updatedSnapshotView;
    UIView *_blinderView;
}

@property (strong, nonatomic) UIView *blinderView; // @synthesize blinderView=_blinderView;
@property (nonatomic) BOOL blinderViewEnabled; // @synthesize blinderViewEnabled=_blinderViewEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *initialSnapshotView; // @synthesize initialSnapshotView=_initialSnapshotView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView *updatedSnapshotView; // @synthesize updatedSnapshotView=_updatedSnapshotView;

- (void).cxx_destruct;
- (id)_newSnapshotViewForPreviewingContext:(id)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)finalizeHighlightForPreviewingContext:(id)arg1;
- (id)highlightShouldBeginInContainerView:(id)arg1 presentationContainerView:(id)arg2 previewingContext:(id)arg3;
- (void)prepareHighlightWithPreviewingContext:(id)arg1;

@end

