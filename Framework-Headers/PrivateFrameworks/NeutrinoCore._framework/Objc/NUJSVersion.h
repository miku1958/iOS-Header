//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSObject.h>

@class NUVersion;

@interface NUJSVersion : NUJSObject
{
}

@property (readonly, nonatomic) NUVersion *version;

- (BOOL)hasProperty:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithVersion:(id)arg1 context:(id)arg2;
- (id)toString;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;

@end

