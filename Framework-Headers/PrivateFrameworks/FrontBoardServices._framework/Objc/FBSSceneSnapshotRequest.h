//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCCoding-Protocol.h>

@class FBSSceneSettings, NSString;
@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding>
{
    NSString *_sceneID;
    FBSSceneSettings *_settings;
    BOOL _handled;
    id<FBSSceneSnapshotRequestDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<FBSSceneSnapshotRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)performSnapshotWithContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

