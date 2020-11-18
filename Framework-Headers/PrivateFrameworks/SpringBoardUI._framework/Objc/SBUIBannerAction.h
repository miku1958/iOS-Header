//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SBUIBannerAction : NSObject
{
    CDUnknownBlockType _actionBlock;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
    unsigned long long _behavior;
    unsigned long long _activationMode;
    NSString *_identifier;
    NSDictionary *_parameters;
}

@property (copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property (readonly, nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property (nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (copy, nonatomic) NSString *remoteServiceBundleIdentifier; // @synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier;
@property (copy, nonatomic) NSString *remoteViewControllerClassName; // @synthesize remoteViewControllerClassName=_remoteViewControllerClassName;

+ (id)actionWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned long long)arg5 behavior:(unsigned long long)arg6 parameters:(id)arg7;

@end

