//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject
{
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    struct FaceList *face_list;
    EspressoFDOverfeatNetwork *_enet;
    double _confidenceThreshold;
    double _minBoundingBoxThreshold;
}

@property (nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property (strong, nonatomic) EspressoFDOverfeatNetwork *enet; // @synthesize enet=_enet;
@property (nonatomic) double minBoundingBoxThreshold; // @synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold;

- (void).cxx_destruct;
- (void)commonInit;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id *)arg3;
- (void)computeBBoxUsingProb:(shared_ptr_dc6ac1b7)arg1 box:(shared_ptr_dc6ac1b7)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (void)dealloc;
- (void)fillFaceList;
- (id)getDescription;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (id)init;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)mergeFaceList;

@end

