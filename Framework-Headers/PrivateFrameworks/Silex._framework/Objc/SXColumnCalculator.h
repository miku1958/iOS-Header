//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXColumnCalculator-Protocol.h>

@class NSString;

@interface SXColumnCalculator : NSObject <SXColumnCalculator>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)columnLayoutWithConstrainedViewportSize:(struct CGSize)arg1 viewportSize:(struct CGSize)arg2 additionalMargins:(double)arg3 documentLayout:(id)arg4;
- (id)columnLayoutWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 documentLayout:(id)arg3;

@end

