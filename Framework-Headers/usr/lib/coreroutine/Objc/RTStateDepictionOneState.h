//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableArray, NSString, RTStateModelLocation;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface RTStateDepictionOneState : NSObject <NSSecureCoding>
{
    RTStateModelLocation *_location;
    long long _type;
    long long _typeSource;
    id<GEOMapItem> _mapItem;
    long long _mapItemSource;
    NSDate *_geocodeDate;
    NSMutableArray *_histEntryExit_s;
    NSString *_customLabel;
}

@property (strong, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
@property (strong, nonatomic) NSDate *geocodeDate; // @synthesize geocodeDate=_geocodeDate;
@property (strong, nonatomic) NSMutableArray *histEntryExit_s; // @synthesize histEntryExit_s=_histEntryExit_s;
@property (strong, nonatomic) RTStateModelLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) id<GEOMapItem> mapItem; // @synthesize mapItem=_mapItem;
@property (nonatomic) long long mapItemSource; // @synthesize mapItemSource=_mapItemSource;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (nonatomic) long long typeSource; // @synthesize typeSource=_typeSource;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 type:(long long)arg2 typeSource:(long long)arg3 mapItem:(id)arg4 mapItemSource:(long long)arg5 customLabel:(id)arg6;

@end
