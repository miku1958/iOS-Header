//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKMapViewDelegate-Protocol.h>

@class MKMapSnapshotRequest, NSLock, NSMutableArray, NSString, UIImage;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate>
{
    UIImage *_lastSnapshot;
    NSString *_lastAttributionString;
    NSLock *_requestLock;
    NSMutableArray *_requests;
    MKMapSnapshotRequest *_servingRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapSnapshotRequest *servingRequest; // @synthesize servingRequest=_servingRequest;
@property (readonly) Class superclass;

+ (BOOL)supportsHighResolutionSnapshots;
+ (BOOL)supportsSharingThumbnails;
- (void).cxx_destruct;
- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 handler:(CDUnknownBlockType)arg4;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize)arg3 requester:(id)arg4 context:(id)arg5;
- (void)dealloc;
- (void)flushRequestQueue;
- (id)init;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;

@end

