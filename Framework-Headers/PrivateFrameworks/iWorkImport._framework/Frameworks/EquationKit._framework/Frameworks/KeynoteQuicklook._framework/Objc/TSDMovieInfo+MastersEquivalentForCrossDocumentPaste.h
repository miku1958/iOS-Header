//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDMovieInfo.h>

#import <KeynoteQuicklook/KNImplicitAmbientAnimating-Protocol.h>

@class NSString;

@interface TSDMovieInfo (MastersEquivalentForCrossDocumentPaste) <KNImplicitAmbientAnimating>

@property (readonly, nonatomic) BOOL canAddImplicitAmbientAnimations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *implicitAmbientAnimationEffectIdentifier;
@property (readonly, nonatomic) BOOL shouldRemoveImplicitAmbientAnimationsAtEndOfNoneTransition;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsImplicitAmbientAnimationsAfterStartingActionBuilds;

- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)newImplicitAmbientBuildRendererWithAnimatedBuild:(id)arg1 buildChunk:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
@end

