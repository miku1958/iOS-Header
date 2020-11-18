//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNSceneDatabase : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_db;
}

+ (id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2;
+ (id)sceneDatabase;
+ (BOOL)supportsSecureCoding;
- (void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
