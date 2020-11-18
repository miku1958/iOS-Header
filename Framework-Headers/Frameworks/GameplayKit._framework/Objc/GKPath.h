//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKPath : NSObject
{
    struct PolylinePathway _pathway;
}

@property (nonatomic, getter=isCyclical) BOOL cyclical;
@property (readonly) unsigned long long numPoints;
@property (nonatomic) float radius;

+ (id)pathWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;
+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+ (id)pathWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_cyclical;
- (MISSING_TYPE *)float2AtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)float3AtIndex:(unsigned long long)arg1;
- (id)initWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(BOOL)arg4;
- (struct PolylinePathway *)pathway;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;
- (void)set_cyclical:(BOOL)arg1;

@end
