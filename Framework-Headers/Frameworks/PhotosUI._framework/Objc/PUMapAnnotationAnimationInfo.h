//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUMapAnnotationAnimationInfo : NSObject
{
    BOOL _remove;
    id _annotation;
    id _destinationAnnotation;
    long long _fadeType;
    id _annotationForCountSwap;
    long long _reason;
    CDStruct_2c43369c _sourceCoordinate;
    CDStruct_2c43369c _destinationCoordinate;
}

@property (readonly, strong, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property (readonly, strong, nonatomic) id annotationForCountSwap; // @synthesize annotationForCountSwap=_annotationForCountSwap;
@property (readonly, strong, nonatomic) id destinationAnnotation; // @synthesize destinationAnnotation=_destinationAnnotation;
@property (readonly, nonatomic) CDStruct_c3b9c2ee destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
@property (readonly, nonatomic) long long fadeType; // @synthesize fadeType=_fadeType;
@property (readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) BOOL remove; // @synthesize remove=_remove;
@property (readonly, nonatomic) CDStruct_c3b9c2ee sourceCoordinate; // @synthesize sourceCoordinate=_sourceCoordinate;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 destinationAnnotation:(id)arg2 sourceCoordinate:(CDStruct_c3b9c2ee)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 fadeType:(long long)arg5 remove:(BOOL)arg6 annotationForCountSwap:(id)arg7 reason:(long long)arg8;

@end
