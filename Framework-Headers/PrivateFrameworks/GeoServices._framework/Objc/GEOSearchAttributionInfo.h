//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOSearchAttributionSource, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    GEOSearchAttributionSource *_source;
    NSArray *_logoPaths;
    NSArray *_snippetLogoPaths;
    NSString *_displayName;
    unsigned int _attributionRequirementsMask;
}

@property (readonly, nonatomic) NSArray *attributionApps;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property (readonly, nonatomic) BOOL shouldOpenInAppStore;
@property (readonly, nonatomic) GEOSearchAttributionSource *source; // @synthesize source=_source;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) NSString *webBaseActionURL;

+ (BOOL)supportsSecureCoding;
- (void)addLogoPath:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (id)logoPathForScale:(double)arg1;
- (id)snippetLogoPathForScale:(double)arg1;
- (BOOL)supportsActionURLs;

@end

