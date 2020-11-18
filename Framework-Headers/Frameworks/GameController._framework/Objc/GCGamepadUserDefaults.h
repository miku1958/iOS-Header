//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

@class GCLightbarColor, NSString;

@interface GCGamepadUserDefaults : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    GCLightbarColor *_lightbarColor;
}

@property (strong) GCLightbarColor *lightbarColor; // @synthesize lightbarColor=_lightbarColor;
@property (readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)defaultsForControllerIdentifier:(id)arg1;
+ (id)nsUserDefaults;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)save;

@end
