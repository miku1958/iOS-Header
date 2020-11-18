//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CADIdleChangeTrackingCleanupInfo : NSObject
{
    int _numberOfChanges;
    double _languishPeriod;
}

@property (nonatomic) double languishPeriod; // @synthesize languishPeriod=_languishPeriod;
@property (nonatomic) int numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;

+ (id)serverIdleChangeTrackingCleanupInfo;
- (id)description;
- (id)initWithLanguishPeriod:(double)arg1 numberOfChanges:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToInfo:(id)arg1;

@end
