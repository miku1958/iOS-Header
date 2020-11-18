//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface RTLOIDisplayInfo : NSObject
{
    int _style;
    long long _type;
    long long _modeOfTransportation;
    id<GEOMapItem> _geoMapItem;
    NSString *_unknownTypeName;
    double _eta;
    NSDate *_arrival;
    NSDate *_deparature;
}

@property (readonly, nonatomic) NSDate *arrival; // @synthesize arrival=_arrival;
@property (readonly, nonatomic) NSDate *deparature; // @synthesize deparature=_deparature;
@property (readonly, nonatomic) double eta; // @synthesize eta=_eta;
@property (readonly, nonatomic) id<GEOMapItem> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property (readonly, nonatomic) long long modeOfTransportation; // @synthesize modeOfTransportation=_modeOfTransportation;
@property (readonly, nonatomic) int style; // @synthesize style=_style;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSString *unknownTypeName; // @synthesize unknownTypeName=_unknownTypeName;

+ (id)dateFormatter;
+ (id)durationFormatter;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStyle:(int)arg1 type:(long long)arg2 geoMapItem:(id)arg3 unknownTypeName:(id)arg4 eta:(double)arg5 arrival:(id)arg6 departure:(id)arg7 modeOfTransportation:(long long)arg8;
- (BOOL)isEquivalentToDisplayInfo:(id)arg1;
- (id)localizedDescription;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)mapsURL;

@end

