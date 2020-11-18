//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIRenderInfo : NSObject
{
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)arg1;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCompletedTask:(id)arg1;
- (long long)pixelsOverdrawn;

@end

