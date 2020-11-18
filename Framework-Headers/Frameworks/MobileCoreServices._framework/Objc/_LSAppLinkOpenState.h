//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _LSAppLinkOpenState : NSObject
{
    BOOL _openStrategyChanged;
    NSURL *_URL;
    NSString *_bundleIdentifier;
    NSDictionary *_browserState;
}

@property (copy) NSURL *URL; // @synthesize URL=_URL;
@property (copy) NSDictionary *browserState; // @synthesize browserState=_browserState;
@property (copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property BOOL openStrategyChanged; // @synthesize openStrategyChanged=_openStrategyChanged;

+ (id)openStateWithDataRepresentation:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)validate;

@end
