//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGDayInHistoryMemoryGenerator : PGMemoryGenerator
{
    NSDate *_localDate;
}

@property (strong, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_potentialMemoriesForDryTesting;

@end

