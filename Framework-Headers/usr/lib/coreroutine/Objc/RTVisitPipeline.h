//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSString, RTVisit, RTVisitHyperParameter;

@interface RTVisitPipeline : NSObject
{
    NSArray *_modules;
    NSMutableDictionary *_moduleStats;
    unsigned long long _iteration;
    BOOL _bootStrappingDone;
    NSString *_name;
    unsigned long long _type;
    RTVisit *_lastVisit;
    RTVisitHyperParameter *_hyperParameter;
    NSDate *_lastProcessedLocationDate;
}

@property (nonatomic) BOOL bootStrappingDone; // @synthesize bootStrappingDone=_bootStrappingDone;
@property (readonly, nonatomic) RTVisitHyperParameter *hyperParameter; // @synthesize hyperParameter=_hyperParameter;
@property (strong, nonatomic) NSDate *lastProcessedLocationDate; // @synthesize lastProcessedLocationDate=_lastProcessedLocationDate;
@property (readonly, nonatomic) RTVisit *lastVisit; // @synthesize lastVisit=_lastVisit;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)typeToString:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)filterLocations:(id)arg1;
- (id)filterVisitClusters:(id)arg1;
- (id)init;
- (id)initWithModules:(id)arg1 name:(id)arg2 type:(unsigned long long)arg3 lastVisit:(id)arg4 hyperParameter:(id)arg5;
- (BOOL)isRedundantForVisit:(id)arg1 currentVisit:(id)arg2 distanceCalculator:(id)arg3;
- (id)processLocations:(id)arg1;
- (id)processVisitCluster:(id)arg1;
- (void)shutdown;

@end

