//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGFeaturedMemoryGenerator : PGMemoryGenerator
{
    BOOL _usesLowRequirements;
    BOOL _oldMemory;
    NSDate *_upperBoundLocalDate;
}

@property (nonatomic) BOOL oldMemory; // @synthesize oldMemory=_oldMemory;
@property (strong, nonatomic) NSDate *upperBoundLocalDate; // @synthesize upperBoundLocalDate=_upperBoundLocalDate;
@property (nonatomic) BOOL usesLowRequirements; // @synthesize usesLowRequirements=_usesLowRequirements;

- (void).cxx_destruct;

@end

