//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEvent.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface RTEventHomeKitScene : RTEvent <NSSecureCoding>
{
    NSUUID *_homeIdentifier;
    NSUUID *_sceneIdentifier;
    NSString *_sceneName;
    NSString *_clientBundleIdentifier;
    long long _sceneType;
}

@property (readonly, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property (readonly, nonatomic) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property (readonly, nonatomic) NSUUID *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (readonly, nonatomic) NSString *sceneName; // @synthesize sceneName=_sceneName;
@property (readonly, nonatomic) long long sceneType; // @synthesize sceneType=_sceneType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHomeIdentifier:(id)arg1 sceneIdentifier:(id)arg2 sceneName:(id)arg3 sceneType:(long long)arg4 clientBundleIdentifier:(id)arg5 source:(long long)arg6 startDate:(id)arg7 endDate:(id)arg8;

@end
