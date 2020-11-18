//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMFWeakObject : NSObject
{
    id _object;
    unsigned long long _objectHash;
}

@property (readonly, weak) id object; // @synthesize object=_object;
@property (readonly, nonatomic) unsigned long long objectHash; // @synthesize objectHash=_objectHash;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithWeakObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
