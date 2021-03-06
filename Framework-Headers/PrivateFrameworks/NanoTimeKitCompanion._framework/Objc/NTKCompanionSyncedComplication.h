//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKComplicationDescriptor, NSString;

@interface NTKCompanionSyncedComplication : NSObject
{
    NSString *_companionBundleIdentifier;
    NSString *_fallbackName;
    NSString *_localizedName;
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
    CLKComplicationDescriptor *_descriptor;
}

@property (readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, nonatomic) CLKComplicationDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, nonatomic) NSString *localizedName;

- (void).cxx_destruct;
- (id)initWithRemoteApplication:(id)arg1 descriptor:(id)arg2;

@end

