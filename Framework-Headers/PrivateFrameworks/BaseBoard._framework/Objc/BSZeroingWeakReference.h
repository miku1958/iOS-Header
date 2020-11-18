//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    Class _objectClass;
    unsigned long long _objectAddress;
}

@property (readonly, weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectAddress; // @synthesize objectAddress=_objectAddress;
@property (nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;

+ (id)referenceWithObject:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
