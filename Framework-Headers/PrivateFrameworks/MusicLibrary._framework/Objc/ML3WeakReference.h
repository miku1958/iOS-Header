//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ML3WeakReference : NSObject
{
    id _object;
    unsigned long long _objectAddress;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)object;

@end
