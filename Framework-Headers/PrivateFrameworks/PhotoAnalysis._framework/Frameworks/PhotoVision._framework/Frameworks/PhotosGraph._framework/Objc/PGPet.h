//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface PGPet : NSObject
{
    NSSet *_owners;
    NSMutableSet *_momentNodes;
}

@property (strong, nonatomic) NSMutableSet *moments; // @synthesize moments=_momentNodes;
@property (strong, nonatomic) NSSet *owners; // @synthesize owners=_owners;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

