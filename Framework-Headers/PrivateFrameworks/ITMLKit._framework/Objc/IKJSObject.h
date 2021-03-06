//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject
{
    IKAppContext *_appContext;
    NSMutableDictionary *_managedProperties;
}

@property (readonly, weak, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (strong, nonatomic) NSMutableDictionary *managedProperties; // @synthesize managedProperties=_managedProperties;

+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAppContext:(id)arg1;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)jsValueForProperty:(id)arg1;
- (void)setJSValue:(id)arg1 forProperty:(id)arg2;

@end

