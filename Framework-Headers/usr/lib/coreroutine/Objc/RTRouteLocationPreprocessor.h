//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTRouteLocationPreprocessor : NSObject
{
}

+ (double)costOfLocation:(id)arg1;
+ (long long)findProperEndFromLocations:(id)arg1;
+ (unsigned long long)idealPreviousLocationIndex:(id)arg1 from:(unsigned long long)arg2;
+ (id)preprocessLocations:(id)arg1 error:(id *)arg2;
+ (id)selectBestSubSequenceFromLocations:(id)arg1 error:(id *)arg2;

@end

