//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/NSCopying-Protocol.h>
#import <Parsec/NSObject-Protocol.h>
#import <Parsec/PRSPredictionSupport-Protocol.h>

@class NSString, NSURL;
@protocol PRSApp;

@protocol PRSBaseResult <NSObject, NSCopying, PRSPredictionSupport>

@property (strong, nonatomic) NSString *adam_id;
@property (strong, nonatomic) id<PRSApp> app;
@property (strong, nonatomic) NSString *bundle_id;
@property (strong, nonatomic) NSString *fbr;
@property (strong, nonatomic) NSString *geoUserSessionIDString;
@property (nonatomic) double geoUserSessionStartTime;
@property BOOL isQuickGlance;
@property (nonatomic) long long max_age;
@property (nonatomic) long long media_kind;
@property (nonatomic) long long placement;
@property (nonatomic) BOOL playable;
@property (nonatomic) unsigned long long rank;
@property (strong, nonatomic) NSString *resultBundleID;
@property (strong, nonatomic) NSString *resultIdentifier;
@property (nonatomic) float resultScore;
@property (strong, nonatomic) NSURL *resultURL;
@property (nonatomic) unsigned long long score;
@property (strong, nonatomic) NSString *section_header;
@property (strong, nonatomic) NSString *templateName;
@property (strong, nonatomic) NSString *title;
@property long long topHitScore;
@property (strong, nonatomic) NSString *type;


@optional
@end

