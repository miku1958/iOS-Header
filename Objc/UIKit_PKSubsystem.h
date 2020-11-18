//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/PKModularService-Protocol.h>

@class NSDictionary, NSString;

@interface UIKit_PKSubsystem : NSObject <PKModularService>
{
    BOOL _initialized;
    BOOL _plugInKitProcess;
    NSDictionary *_infoDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property (nonatomic, getter=isPlugInKitProcess) BOOL plugInKitProcess; // @synthesize plugInKitProcess=_plugInKitProcess;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;

@end
