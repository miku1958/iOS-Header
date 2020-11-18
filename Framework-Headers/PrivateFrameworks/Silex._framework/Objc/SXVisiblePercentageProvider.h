//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVisiblePercentageProviding-Protocol.h>
#import <Silex/SXVisiblePercentageReporting-Protocol.h>

@class NSString;

@interface SXVisiblePercentageProvider : NSObject <SXVisiblePercentageProviding, SXVisiblePercentageReporting>
{
    double _visiblePercentage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double visiblePercentage; // @synthesize visiblePercentage=_visiblePercentage;

- (id)initWithVisiblePercentage:(double)arg1;
- (double)visiblePercentageOfObject:(id)arg1;

@end

