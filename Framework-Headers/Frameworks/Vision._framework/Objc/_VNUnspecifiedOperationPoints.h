//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNOperationPoints.h>

__attribute__((visibility("hidden")))
@interface _VNUnspecifiedOperationPoints : VNOperationPoints
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withPrecision:(float)arg3 error:(id *)arg4;
- (BOOL)getConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 withRecall:(float)arg3 error:(id *)arg4;
- (BOOL)getDefaultConfidence:(float *)arg1 forClassificationIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)getPrecision:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (BOOL)getRecall:(float *)arg1 forClassificationIdentifier:(id)arg2 confidence:(float)arg3 error:(id *)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
