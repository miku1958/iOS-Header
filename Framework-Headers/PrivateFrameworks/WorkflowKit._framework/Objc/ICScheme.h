//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICApp, NSArray, NSDictionary, NSString, NSURL;

@interface ICScheme : NSObject
{
    ICApp *_app;
    NSString *_scheme;
    NSArray *_actions;
    NSArray *_capabilities;
    NSDictionary *_definition;
}

@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, weak, nonatomic) ICApp *app; // @synthesize app=_app;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic) NSString *callbackCancelURLKey;
@property (readonly, nonatomic) NSString *callbackErrorURLKey;
@property (readonly, nonatomic, getter=isCallbackScheme) BOOL callbackScheme;
@property (readonly, nonatomic) NSString *callbackSourceNameKey;
@property (readonly, nonatomic) NSString *callbackSuccessURLKey;
@property (readonly, nonatomic) BOOL canLaunchApp;
@property (readonly, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, copy, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property (readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property (readonly, nonatomic) NSURL *universalLinkBaseURL;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDefinition:(id)arg1 app:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesURL:(id)arg1;

@end
