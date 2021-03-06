//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ATXExecutableIdentifier, ATXExecutableReference;

@interface ATXExecutableReferencePair : NSObject
{
    ATXExecutableReference *_reference;
    ATXExecutableIdentifier *_executable;
}

@property (readonly, nonatomic) ATXExecutableIdentifier *executable; // @synthesize executable=_executable;
@property (readonly, nonatomic) ATXExecutableReference *reference; // @synthesize reference=_reference;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithReference:(id)arg1 executable:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

