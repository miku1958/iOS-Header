//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/MTEventFilter-Protocol.h>

@class NSString;

@interface MTFinalValidationFilter : MTObject <MTEventFilter>
{
    BOOL _shouldApplyDeRes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldApplyDeRes; // @synthesize shouldApplyDeRes=_shouldApplyDeRes;
@property (readonly) Class superclass;

- (id)apply:(id)arg1;
- (void)validateFields:(id)arg1;

@end

