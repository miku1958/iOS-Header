//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>
#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class NSString;

@interface MNRouteUpdateFreshness : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>
{
    double _maxAge;
    double _maxDisplacement;
    double _minAccuracy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property (nonatomic) double maxDisplacement; // @synthesize maxDisplacement=_maxDisplacement;
@property (nonatomic) double minAccuracy; // @synthesize minAccuracy=_minAccuracy;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionary;

@end
