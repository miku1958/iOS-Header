//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface ECAuthScheme : NSObject
{
}

@property (readonly, nonatomic) unsigned int applescriptScheme;
@property (readonly, copy, nonatomic) NSString *humanReadableName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, nonatomic) BOOL requiresUsername;
@property (readonly, copy, nonatomic) NSSet *supportedSASLMechanisms;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)knownSchemes;
+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;
+ (id)schemeWithName:(id)arg1;

@end

