//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXTuple : NSObject
{
    unsigned long long _hash;
    NSArray *_objects;
}

@property (readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

