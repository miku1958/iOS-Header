//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOPDAssociatedApp, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOAssociatedApp : NSObject
{
    GEOPDAssociatedApp *_geoAssociatedApp;
}

@property (readonly, nonatomic) NSArray *alternateAppAdamIds;
@property (strong, nonatomic) GEOPDAssociatedApp *geoAssociatedApp; // @synthesize geoAssociatedApp=_geoAssociatedApp;
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (readonly, nonatomic) NSString *preferredAppAdamId;

- (void)dealloc;
- (id)initWithGEOPDAssociatedApp:(id)arg1;

@end

