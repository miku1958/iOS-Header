//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBRootFolderPageTransition-Protocol.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderPageTransitionHandle : NSObject <SBRootFolderPageTransition, BSDescriptionProviding>
{
    BOOL _valid;
    NSString *_reason;
    SBRootFolderController *_folderController;
    long long _sourcePageState;
    long long _destinationPageState;
    double _pageTransitionProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destinationPageState; // @synthesize destinationPageState=_destinationPageState;
@property (readonly, nonatomic) SBRootFolderController *folderController; // @synthesize folderController=_folderController;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pageTransitionProgress; // @synthesize pageTransitionProgress=_pageTransitionProgress;
@property (readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (nonatomic) long long sourcePageState; // @synthesize sourcePageState=_sourcePageState;
@property (readonly) Class superclass;
@property (nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endTransitionSuccessfully:(BOOL)arg1;
- (id)initWithFolderController:(id)arg1 destinationPageState:(long long)arg2 reason:(id)arg3;
- (void)setTransitionProgress:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

