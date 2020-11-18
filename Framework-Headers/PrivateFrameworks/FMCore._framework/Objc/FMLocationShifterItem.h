//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

@interface FMLocationShifterItem : NSObject
{
    BOOL _shifted;
    double _accuracy;
    NSDate *_timestamp;
    id _context;
    NSError *_error;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property (readonly, nonatomic) id context; // @synthesize context=_context;
@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL shifted; // @synthesize shifted=_shifted;
@property (readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2 timestamp:(id)arg3 context:(id)arg4;

@end

