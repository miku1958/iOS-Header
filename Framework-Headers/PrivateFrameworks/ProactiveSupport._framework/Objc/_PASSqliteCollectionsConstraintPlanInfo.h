//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASSqliteCollectionsConstraintPlanInfo : NSObject
{
    BOOL _unique;
    BOOL _omit;
    double _estimatedRows;
    double _estimatedCost;
}

@property (nonatomic) double estimatedCost; // @synthesize estimatedCost=_estimatedCost;
@property (nonatomic) double estimatedRows; // @synthesize estimatedRows=_estimatedRows;
@property (nonatomic) BOOL omit; // @synthesize omit=_omit;
@property (nonatomic) BOOL unique; // @synthesize unique=_unique;

- (id)initWithEstimatedRows:(double)arg1 estimatedCost:(double)arg2 unique:(BOOL)arg3 omit:(BOOL)arg4;

@end
