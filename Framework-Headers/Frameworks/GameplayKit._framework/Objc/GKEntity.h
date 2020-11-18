//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_components;
}

@property (readonly, strong, nonatomic) NSArray *components;

+ (id)entity;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)componentForClass:(Class)arg1;
- (id)componentForKey:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)removeComponentForClass:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;

@end

