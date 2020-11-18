//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUDisplayLocationProvider-Protocol.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface PUDisplayLocationProvider : NSObject <PUDisplayLocationProvider>
{
    id<UICoordinateSpace> __coordinateSpace;
    struct CGPoint __point;
}

@property (readonly, nonatomic) id<UICoordinateSpace> _coordinateSpace; // @synthesize _coordinateSpace=__coordinateSpace;
@property (readonly, nonatomic) struct CGPoint _point; // @synthesize _point=__point;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct CGPoint)locationInView:(id)arg1;

@end

