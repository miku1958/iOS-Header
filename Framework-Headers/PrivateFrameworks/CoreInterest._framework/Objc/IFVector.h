//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreInterest/IFVector-Protocol.h>

@class NSString;

@interface IFVector : NSObject <IFVector>
{
    double *_vector;
    unsigned long long _length;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long length; // @synthesize length=_length;
@property (readonly) Class superclass;
@property double *vector; // @synthesize vector=_vector;

+ (id)ones:(unsigned long long)arg1;
+ (id)vectorWithElements:(double *)arg1 length:(unsigned long long)arg2;
+ (id)zeros:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVector:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)performOperation:(id)arg1 other:(id)arg2;
- (double)performScalarOperation:(id)arg1 other:(id)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
