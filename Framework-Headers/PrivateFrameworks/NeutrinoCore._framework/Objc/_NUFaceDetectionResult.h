//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUFaceDetectionResult-Protocol.h>

@class NSArray, NSString;
@protocol NURenderStatistics;

@interface _NUFaceDetectionResult : _NURenderResult <NUFaceDetectionResult>
{
    NSArray *_faces;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSArray *faces; // @synthesize faces=_faces;
@property (readonly) unsigned long long hash;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

