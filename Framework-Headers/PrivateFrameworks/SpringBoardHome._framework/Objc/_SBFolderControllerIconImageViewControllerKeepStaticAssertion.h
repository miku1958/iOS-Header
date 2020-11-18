//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class NSIndexSet, NSString, SBFolderController;

@interface _SBFolderControllerIconImageViewControllerKeepStaticAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    BOOL _invalidated;
    NSIndexSet *_pageIndexesToExclude;
    NSString *_reason;
    SBFolderController *_folderController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, copy, nonatomic) NSIndexSet *pageIndexesToExclude; // @synthesize pageIndexesToExclude=_pageIndexesToExclude;
@property (readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithFolderController:(id)arg1 pageIndexesToExclude:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
