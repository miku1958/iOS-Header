//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXGradientFactory-Protocol.h>

@class NSString;

@interface SXGradientFactory : NSObject <SXGradientFactory>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)colorsFromColorStops:(id)arg1;
- (id)gradientForColorStops:(id)arg1 angle:(double)arg2;
- (id)locationsFromColorStops:(id)arg1;

@end

