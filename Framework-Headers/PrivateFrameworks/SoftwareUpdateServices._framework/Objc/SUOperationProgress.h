//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_phase;
    float _percentComplete;
    float _normalizedPercentComplete;
    double _timeRemaining;
    BOOL _isDone;
}

@property (nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property (nonatomic) float normalizedPercentComplete; // @synthesize normalizedPercentComplete=_normalizedPercentComplete;
@property (nonatomic) float percentComplete; // @synthesize percentComplete=_percentComplete;
@property (strong, nonatomic) NSString *phase; // @synthesize phase=_phase;
@property (nonatomic) double timeRemaining; // @synthesize timeRemaining=_timeRemaining;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

