//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSSet, RTEnumerationOptions;

@protocol RTStoreManager <NSObject>
+ (NSSet *)vendedClasses;
- (void)fetchEnumerableObjectsWithOptions:(RTEnumerationOptions *)arg1 offset:(unsigned long long)arg2 handler:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
@end
