//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@interface CLSCachedGeocoderOperation : PIOperationSubclass
{
    id _location;
    double _accuracy;
}

+ (id)operationWithLocation:(id)arg1;
+ (id)operationWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithLocation:(id)arg1 withAccuracy:(double)arg2;
+ (double)recommendedAccuracy;
- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithLocation:(id)arg1 withAccuracy:(double)arg2;

@end

