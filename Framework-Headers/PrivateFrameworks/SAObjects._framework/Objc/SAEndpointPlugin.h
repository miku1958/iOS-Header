//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAEndpoint.h>

@class NSString;

@interface SAEndpointPlugin : SAEndpoint
{
}

@property (copy, nonatomic) NSString *pluginPath;

+ (id)endpointPlugin;
+ (id)endpointPluginWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

