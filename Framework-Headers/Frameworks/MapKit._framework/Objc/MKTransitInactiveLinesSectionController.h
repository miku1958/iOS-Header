//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTransitSectionController.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MKTransitInactiveLinesSectionController : MKTransitSectionController
{
    NSArray *_inactiveLines;
}

@property (readonly, nonatomic) NSArray *inactiveLines; // @synthesize inactiveLines=_inactiveLines;

- (void).cxx_destruct;
- (void)_buildRows;
- (id)_pagingFilter;
- (void)_setNeedsBuildRows;
- (id)init;

@end

