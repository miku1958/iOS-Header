//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableLayout.h>

@class TSDWrapPolygon;

@interface STTextTangierAttachmentLayout : TSDDrawableLayout
{
    TSDWrapPolygon *_polygon;
}

@property (strong, nonatomic) TSDWrapPolygon *polygon; // @synthesize polygon=_polygon;

- (void).cxx_destruct;
- (struct CGRect)boundsInRoot;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)fixTransformFromInterimPosition;
- (void)storeActualPosition;
- (void)validate;
- (id)wrapPolygon;

@end

