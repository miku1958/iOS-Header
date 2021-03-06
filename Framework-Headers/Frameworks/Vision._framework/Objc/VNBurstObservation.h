//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSDictionary, NSString;

@interface VNBurstObservation : VNObservation
{
    NSArray *_allImageIdentifiers;
    NSArray *_bestImageIdentifiers;
    NSDictionary *_allImageStats;
    NSString *_coverImageIdentifier;
    NSArray *_clusters;
    BOOL _isAction;
    BOOL _isPortrait;
}

@property (strong, nonatomic) NSArray *allImageIdentifiers; // @synthesize allImageIdentifiers=_allImageIdentifiers;
@property (strong, nonatomic) NSDictionary *allImageStats; // @synthesize allImageStats=_allImageStats;
@property (strong, nonatomic) NSArray *bestImageIdentifiers; // @synthesize bestImageIdentifiers=_bestImageIdentifiers;
@property (strong, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;
@property (strong, nonatomic) NSString *coverImageIdentifier; // @synthesize coverImageIdentifier=_coverImageIdentifier;
@property (nonatomic) BOOL isAction; // @synthesize isAction=_isAction;
@property (nonatomic) BOOL isPortrait; // @synthesize isPortrait=_isPortrait;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

