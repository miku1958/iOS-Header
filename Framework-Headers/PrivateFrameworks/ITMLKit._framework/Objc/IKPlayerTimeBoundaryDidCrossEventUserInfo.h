//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKPlayerEventMarshaling-Protocol.h>

@class NSDictionary, NSString;

@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject <IKPlayerEventMarshaling>
{
    double _boundary;
}

@property (readonly, nonatomic) double boundary; // @synthesize boundary=_boundary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) Class superclass;

- (id)initWithBoundary:(double)arg1;

@end

