//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSObject;

@interface MFWeakReferenceHolder : NSObject
{
    id<NSObject> _reference;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (id)_initWithObject:(id)arg1;
- (void)dealloc;
- (id)reference;
- (id)retainedReference;

@end

