//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, PKStroke, PKStrokePath;

@interface PKStrokeDelta : NSObject
{
    PKStroke *_deltaStroke;
    PKStrokePath *_deltaStrokeData;
    NSUUID *_strokeUUID;
}

@property (strong, nonatomic) NSUUID *_strokeUUID; // @synthesize _strokeUUID;
@property (strong, nonatomic) PKStroke *deltaStroke; // @synthesize deltaStroke=_deltaStroke;
@property (strong, nonatomic) PKStrokePath *deltaStrokeData; // @synthesize deltaStrokeData=_deltaStrokeData;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)initWithArchive:(const struct StrokeDelta *)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (void)saveToArchive:(struct StrokeDelta *)arg1;

@end
