//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsDaemon/TPSInclusivityValidation.h>

@class NSArray;

@interface TPSRegionsValidation : TPSInclusivityValidation
{
}

@property (readonly, nonatomic) NSArray *excludeRegions;
@property (readonly, nonatomic) NSArray *targetRegions;

- (id)initWithTargetRegions:(id)arg1 excludeRegions:(id)arg2;
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;

@end

