//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKEuclideanStrategy : NSObject <VTKColorDifferenceStrategy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double tolerance;

- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;

@end

