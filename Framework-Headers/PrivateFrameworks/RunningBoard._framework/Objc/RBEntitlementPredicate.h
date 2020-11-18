//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>

@interface RBEntitlementPredicate : NSObject <NSCopying>
{
    unsigned long long _count;
}

@property (readonly) unsigned long long count; // @synthesize count=_count;

+ (id)predicateForObject:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;
- (id)allEntitlements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)matchesEntitlements:(id)arg1;

@end
