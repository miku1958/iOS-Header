//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface WAAQIGradient : NSObject
{
    NSMutableArray *_internalStops;
    NSMutableIndexSet *_locationStops;
    NSMutableDictionary *_colorsByLocation;
    struct _NSRange _range;
}

@property (readonly, nonatomic) NSMutableDictionary *colorsByLocation; // @synthesize colorsByLocation=_colorsByLocation;
@property (strong, nonatomic) NSMutableArray *internalStops; // @synthesize internalStops=_internalStops;
@property (readonly, nonatomic) NSMutableIndexSet *locationStops; // @synthesize locationStops=_locationStops;
@property (readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (readonly, copy, nonatomic) NSArray *stops;

- (void).cxx_destruct;
- (void)addGradientStop:(id)arg1;
- (id)gradientStopForLocation:(unsigned long long)arg1;
- (id)initWithRange:(struct _NSRange)arg1;

@end

