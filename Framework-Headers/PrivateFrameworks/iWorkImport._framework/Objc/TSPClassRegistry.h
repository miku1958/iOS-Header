//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSPClassRegistry : NSObject
{
    NSMutableDictionary *_registry;
    BOOL _didFinishRegistration;
}

- (void).cxx_destruct;
- (Class)classForExtensionNumber:(int)arg1;
- (Class)classForMessage:(const struct Message *)arg1;
- (id)init;
- (void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2;

@end
