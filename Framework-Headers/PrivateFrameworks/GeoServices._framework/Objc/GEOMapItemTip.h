//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject
{
    GEOPDTip *_geoTip;
}

@property (readonly, nonatomic) NSString *bestImageURL;
@property (strong, nonatomic) GEOPDTip *geoTip; // @synthesize geoTip=_geoTip;
@property (readonly, nonatomic) BOOL hasTipId;
@property (readonly, nonatomic) BOOL hasTipTime;
@property (readonly, nonatomic) NSString *localizedSnippet;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *tipId;
@property (readonly, nonatomic) double tipTime;

- (void).cxx_destruct;
- (id)initWithGEOPDTip:(id)arg1;

@end

