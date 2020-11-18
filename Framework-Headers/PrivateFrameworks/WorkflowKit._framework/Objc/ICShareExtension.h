//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString;

@interface ICShareExtension : NSObject
{
    ICApp *_app;
    NSString *_bundleIdentifier;
    NSString *_serviceType;
    NSString *_name;
    NSArray *_actions;
    NSDictionary *_definition;
}

@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, weak, nonatomic) ICApp *app; // @synthesize app=_app;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
