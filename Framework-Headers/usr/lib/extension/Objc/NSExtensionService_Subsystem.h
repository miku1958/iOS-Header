//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/PKModularService-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSExtensionService_Subsystem : NSObject <PKModularService>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;

@end

