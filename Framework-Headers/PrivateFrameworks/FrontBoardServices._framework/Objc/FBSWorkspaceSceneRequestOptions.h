//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSXPCSecureCoding-Protocol.h>

@class FBSSceneClientSettings, FBSSceneSpecification, NSString;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>
{
    BOOL _keyboardScene;
    NSString *_identifier;
    FBSSceneSpecification *_specification;
    FBSSceneClientSettings *_initialClientSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings; // @synthesize initialClientSettings=_initialClientSettings;
@property (nonatomic, getter=isKeyboardScene) BOOL keyboardScene; // @synthesize keyboardScene=_keyboardScene;
@property (copy, nonatomic) FBSSceneSpecification *specification; // @synthesize specification=_specification;
@property (readonly) Class superclass;

+ (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end

