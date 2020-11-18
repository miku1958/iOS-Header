//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKTransitLineMarker-Protocol.h>

@class NSString;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker>
{
    id<GEOTransitLine> _line;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (unsigned long long)featureID;
- (id)initWithGEOTransitLine:(id)arg1;
- (id)labelText;

@end

