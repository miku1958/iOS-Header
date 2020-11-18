//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneSnapshotContext, FBSSceneSnapshotRequestAction;

@interface FBSSceneSnapshotRequestHandle : NSObject
{
    unsigned long long _type;
    FBSSceneSnapshotContext *_context;
    FBSSceneSnapshotRequestAction *_action;
    BOOL _canceled;
}

+ (id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)_clearAction;
- (void)cancelRequest;
- (id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2;
- (void)performRequestForScene:(id)arg1;

@end
