//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext, FCRFaceDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIFaceCoreDetector : CIDetector
{
    CIContext *context;
    NSMutableDictionary *featureOptions;
    BOOL _tracking;
    FCRFaceDetector *faceCoreDetector;
}

@property (strong, nonatomic) CIContext *context; // @synthesize context;
@property (strong) FCRFaceDetector *faceCoreDetector; // @synthesize faceCoreDetector;

- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;
- (void)dealloc;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end
